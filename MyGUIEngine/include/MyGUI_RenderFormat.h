/*!
	@file
	@author		Albert Semenov
	@date		04/2009
	@module
*//*
	This file is part of MyGUI.
	
	MyGUI is free software: you can redistribute it and/or modify
	it under the terms of the GNU Lesser General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.
	
	MyGUI is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Lesser General Public License for more details.
	
	You should have received a copy of the GNU Lesser General Public License
	along with MyGUI.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __MYGUI_RENDER_FORMAT_H__
#define __MYGUI_RENDER_FORMAT_H__

namespace MyGUI
{

	struct MYGUI_EXPORT VertexFormat
	{
		enum Enum
		{
			ColourARGB,
			ColourABGR,
			MAX
		};

		VertexFormat(Enum _value = MAX) : value(_value) { }

		friend bool operator == (VertexFormat const & a, VertexFormat const & b) { return a.value == b.value; }
		friend bool operator != (VertexFormat const & a, VertexFormat const & b) { return a.value != b.value; }

	private:
		Enum value;
	};

} // namespace MyGUI


#endif // __MYGUI_RENDER_FORMAT_H__
