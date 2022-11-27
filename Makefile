all: create_project add_tag add_feature pm

pm: pm.c
	gcc pm.c -o pm

add_feature: add_feature.c
	gcc add_feature.c -o add_feature

add_tag: add_tag.c
	gcc add_tag.c -o add_tag

create_project: create_project.c
	gcc create_project.c -o create_project
