#include "LoadingPage.xaml.h"

using namespace IngnomiaGUI;
using namespace Noesis;
LoadingPage::LoadingPage()
{
	InitializeComponent();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void LoadingPage::InitializeComponent()
{
	GUI::LoadComponent( this, "LoadingPage.xaml" );
}

bool LoadingPage::ConnectEvent( BaseComponent* source, const char* event, const char* handler )
{
	//NS_CONNECT_EVENT( Button, Click, onMMExit_Click );
	//NS_CONNECT_EVENT( Button, Click, onMMSettings_Click );
	return false;
}

/*
void IngamePage::onMMExit_Click( BaseComponent* sender, const RoutedEventArgs& args )
{
	//emit signalExit();
}

*/

////////////////////////////////////////////////////////////////////////////////////////////////////
NS_BEGIN_COLD_REGION

NS_IMPLEMENT_REFLECTION_( IngnomiaGUI::LoadingPage, "IngnomiaGUI.LoadingPage" );
