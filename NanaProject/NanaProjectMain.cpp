#include "NanaProjectMain.h"


MainForm::MainForm() : form(API::make_center(640, 480), appear::decorate<appear::taskbar>())
{
	caption("NanaProject - Nana C++ Library");

	_m_make_menus();

	place_.div("vert<menubar weight=28>");
	place_["menubar"] << menubar_;
	place_.collocate();

}

void MainForm::_m_make_menus()
{
	menubar_.push_back("&File");
	menubar_.at(0).append("Quit", [this](menu::item_proxy& ip)
	{
		close();
	});
	
	menubar_.push_back("&Help");
	menubar_.at(1).append("About", [this](menu::item_proxy& ip)
	{
		msgbox aboutbox(*this, "Welcome to...", msgbox::button_t::ok);
		aboutbox << "Nana project template for Visual Studio IDE";
		aboutbox.show();
	});
	menubar_.at(1).check_style(0, menu::checks::highlight);
}
