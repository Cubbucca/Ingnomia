#ifndef __LoadingPage_H__
#define __LoadingPage_H__

#include <NoesisPCH.h>

namespace IngnomiaGUI
{

////////////////////////////////////////////////////////////////////////////////////////////////////
class LoadingPage final : public Noesis::UserControl
{
public:
	LoadingPage();

private:
	void InitializeComponent();

	bool ConnectEvent( BaseComponent* source, const char* event, const char* handler ) override;

	NS_DECLARE_REFLECTION( LoadingPage, UserControl )
};

} // namespace IngnomiaGUI

#endif