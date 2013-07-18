/**
 * libmacho-1.0 - section.c
 * Copyright (C) 2013 Crippy-Dev Team
 * Copyright (C) 2010-2013 Joshua Hill
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <libcrippy-1.0/debug.h>
#include <libcrippy-1.0/libcrippy.h>

#include <libmacho-1.0/section.h>

/*
 * Mach-O Segment Functions
 */
macho_section_t* macho_section_create() {
	macho_section_t* section = NULL;
	return section;
}

macho_section_t* macho_section_load(unsigned char* data, uint32_t offset) {
	macho_section_t* section = macho_section_create();
	return section;
}

void macho_section_debug(macho_section_t* section) {

}

void macho_section_free(macho_section_t* section) {

}

/*
 * Mach-O Segment Info Functions
 */
macho_section_info_t* macho_section_info_create() {
	macho_section_info_t* info = malloc(sizeof(macho_section_info_t));
	if(info) {
		memset(info, '\0', sizeof(macho_section_info_t));
	}
	return info;
}

macho_section_info_t* macho_section_info_load(unsigned char* data, uint32_t offset) {
	macho_section_info_t* info = macho_section_info_create();
	if(info) {
		memcpy(info, &data[offset], sizeof(macho_section_info_t));
		macho_section_info_debug(info);
	}
	return info;
}

void macho_section_info_debug(macho_section_info_t* info) {
	debug("SectName: %s\n", info->sectname);
  	//char		sectname[16];	/* name of this section */
	debug("SegName: %s\n", info->segname);
	//char		segname[16];	/* segment this section goes in */
	debug("Address: 0x%x\n", info->?addr);
	//uint32_t	addr;		/* memory address of this section */
	debug("Size: 0x%x\n", info->size);
	//uint32_t	size;		/* size in bytes of this section */
	debug("Offset: 0x%x\n", info->offset);
	//uint32_t	offset;		/* file offset of this section */
	debug("Align: 0x%x\n", info->align);
	//uint32_t	align;		/* section alignment (power of 2) */
	debug("RelOff: 0x%x\n", info->reloff);
	//uint32_t	reloff;		/* file offset of relocation entries */
	debug("nreloc: 0x%x\n", info->nreloc);
	//uint32_t	nreloc;		/* number of relocation entries */
	debug("flags: 0x%x\n", info->flags);
	//uint32_t	flags;		/* flags (section type and attributes)*/
}

void macho_section_info_free(macho_section_info_t* info) {

}
