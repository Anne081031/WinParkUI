#include "commonwidgetlibrary.h"


QCommonWidgetLibrary::QCommonWidgetLibrary()
{
}

QCommonWidgetLibrary::~QCommonWidgetLibrary( )
{

}

void QCommonWidgetLibrary::BrowseLog( )
{
    static QDlgLogBrowser dlg;
    dlg.BrowseLog( );
}
