// This file is part of openCaesar3.
//
// openCaesar3 is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// openCaesar3 is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with openCaesar3.  If not, see <http://www.gnu.org/licenses/>.

#ifndef __OPENCAESAR3_SCENARIO_OC3SAVE_LOADER_H_INCLUDED__
#define __OPENCAESAR3_SCENARIO_OC3SAVE_LOADER_H_INCLUDED__

#include "abstractloader.hpp"
#include "core/scopedptr.hpp"

class Game;

class GameLoaderOc3 : public GameAbstractLoader
{
public:
  bool load(const std::string& filename, Game &game);
  bool isLoadableFileExtension( const std::string& filename );
};

#endif
