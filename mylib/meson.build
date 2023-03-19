project('mylib', 'c')

conf_data = configuration_data()
conf_data.set('greeting_prefix', get_option('greeting'))
configure_file(input: 'config.h.in',
              output: 'config.h',
              configuration: conf_data)

config_inc = include_directories('.')
mylib = library('mylib', 'mylib.c', include_directories: config_inc, install: true)

install_headers('mylib.h')
pkg = import('pkgconfig')
pkg.generate(mylib)
