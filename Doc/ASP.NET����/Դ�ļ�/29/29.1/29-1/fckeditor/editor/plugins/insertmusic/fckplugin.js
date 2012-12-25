FCKCommands.RegisterCommand('InsertMusic', new FCKDialogCommand('InsertMusic', FCKLang.InsertMusic, FCKPlugins.Items['InsertMusic'].Path + 'insertmusic.html', 370,120)) ; 
var insertcodeItem = new FCKToolbarButton('InsertMusic', FCKLang.InsertMusic) ; 
insertcodeItem.IconPath = FCKPlugins.Items['InsertMusic'].Path + 'music.gif'; 
FCKToolbarItems.RegisterItem('InsertMusic', insertcodeItem);