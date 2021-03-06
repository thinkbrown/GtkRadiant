/*
   Copyright (C) 1999-2007 id Software, Inc. and contributors.
   For a list of contributors, see the accompanying CONTRIBUTORS file.

   This file is part of GtkRadiant.

   GtkRadiant is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   GtkRadiant is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GtkRadiant; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

//
//
// QERadiant Multilevel Undo/Redo
//
//

//start operation
void Undo_Start( const char *operation );
//end operation
void Undo_End( void );
//add brush to the undo
void Undo_AddBrush( brush_t *pBrush );
//add a list with brushes to the undo
void Undo_AddBrushList( brush_t *brushlist );
//end a brush after the operation is performed
void Undo_EndBrush( brush_t *pBrush );
//end a list with brushes after the operation is performed
void Undo_EndBrushList( brush_t *brushlist );
//add entity to undo
void Undo_AddEntity( entity_t *entity );
//end an entity after the operation is performed
void Undo_EndEntity( entity_t *entity );
//undo last operation (bSilent == true -> will not print the "undone blah blah message")
void Undo_Undo( boolean bSilent = false );
//redo last undone operation
void Undo_Redo( void );
//get the undo Id of the next undo (0 if none available)
int Undo_GetUndoId( void );
//returns true if there is something to be undone available
int  Undo_UndoAvailable( void );
//returns true if there is something to redo available
int  Undo_RedoAvailable( void );
//clear the undo buffer
void Undo_Clear( void );
//set maximum undo size (default 64)
void Undo_SetMaxSize( int size );
//get maximum undo size
int  Undo_GetMaxSize( void );
//set maximum undo memory in bytes (default 2 MB)
void Undo_SetMaxMemorySize( int size );
//get maximum undo memory in bytes
int  Undo_GetMaxMemorySize( void );
//returns the amount of memory used by undo
int  Undo_MemorySize( void );
