#ifndef NANAPROJECTMAIN_H
#define NANAPROJECTMAIN_H

#include <nana/gui.hpp>
#include <nana/gui/widgets/menubar.hpp>
#include <nana/gui/place.hpp>
#include <nana/gui/msgbox.hpp>

using namespace nana;

class MainForm : public form
{
	place   place_{ *this };
	menubar menubar_{ *this };

	public:
		MainForm();
	private:
		void _m_make_menus();
};

#endif // NANAPROJECTMAIN_H