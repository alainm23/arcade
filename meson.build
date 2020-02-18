project('com.github.alainm23.arcade',
        'vala', 'c',
        version: '0.1')

gnome = import('gnome')
i18n = import('i18n')

add_project_arguments('-DGETTEXT_PACKAGE="@0@"'.format(meson.project_name()), language: 'c')

executable(
    meson.project_name(),
    'src/Application.vala',
    dependencies: [
        dependency ('gee-0.8'),
        dependency ('gobject-2.0'),
        dependency ('glib-2.0'),
        dependency ('granite'),
        dependency ('sqlite3'),
        dependency ('gtk+-3.0'),
        dependency ('retro-gtk', version: '>=' + '0.18.0'),
        meson.get_compiler('c').find_library('m', required : false)
    ],
    install: true
)

# meson.add_install_script ('build-aux/meson/post_install.py')