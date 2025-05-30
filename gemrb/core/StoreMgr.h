/* GemRB - Infinity Engine Emulator
 * Copyright (C) 2003 The GemRB Project
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 *
 */

/**
 * @file StoreMgr.h
 * Declares StoreMgr class, loader for Store objects
 * @author The GemRB Project
 */


#ifndef STOREMGR_H
#define STOREMGR_H

#include "Plugin.h"
#include "Store.h"

#include "Streams/DataStream.h"

namespace GemRB {

/**
 * @class StoreMgr
 * Abstract loader for Store objects
 */

class GEM_EXPORT StoreMgr : public Plugin {
public:
	virtual bool Open(DataStream* stream) = 0;
	virtual Store* GetStore(Store* s) = 0;

	virtual bool PutStore(DataStream* stream, Store* s) = 0;
};

}

#endif
