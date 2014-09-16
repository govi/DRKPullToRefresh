DRKPullToRefresh [![Build Status](https://travis-ci.org/govi/DRKPullToRefresh.png)](https://travis-ci.org/govi/DRKPullToRefresh)
================
DRKPullToRefresh is a clean and customisable pull-to-refresh component that uses [SpinKit](https://github.com/raymondjavaxx/SpinKit-ObjC) animations. You can change the font, colors, size and animations from SpinKit. This is based on [KoaPullToRefresh](https://github.com/sergigracia/KoaPullToRefresh) that sports a very simple and clear design. 

![](https://raw.github.com/govi/DRKPullToRefresh/master/Resources/animatedDemo.gif)

Installation
============
### From CocoaPods [Not ready yet]
1. Add ```pod 'DRKPullToRefresh'``` to your Podfile.

### Manually
1. Drag the DRKPullToRefresh/DRKPullToRefresh folder into your project.
2. Add the ```QuartCore framework``` to your project.
4. Import ```DRKPullToRefresh.h```.

Usage
=====
### Adding DRKPullToRefresh
Add this in your ```viewDidLoad```:

```objective-c
[tableView addPullToRefreshWithActionHandler:^{
	// Tasks to do on refresh. Update datasource, add rows, …
	// Call [tableView.pullToRefreshView stopAnimating] when done.
}];
```

Adding background color:

```objective-c
[tableView addPullToRefreshWithActionHandler:^{
	// Tasks to do on refresh. Update datasource, add rows, …
	// Call [tableView.pullToRefreshView stopAnimating] when done.
} withBackgroundColor:[UIColor blueColor]];
```

Adding the height of showed pixels:

```objective-c
[tableView addPullToRefreshWithActionHandler:^{
	// Tasks to do on refresh. Update datasource, add rows, …
	// Call [tableView.pullToRefreshView stopAnimating] when done.
} withBackgroundColor:[UIColor blueColor] withPullToRefreshHeightShowed:2];
```

### Customize DRKPullToRefresh

Set the color of fontAwesome icon and text:

```objective-c
[self.tableView.pullToRefreshView setTextColor:[UIColor whiteColor]];
```

Set the text font:

```objective-c
[self.tableView.pullToRefreshView setTextFont:[UIFont fontWithName:@"OpenSans-Bold" size:14]];
```

Set the font awesome icon:

```objective-c
[self.tableView.pullToRefreshView setFontAwesomeIcon:@"icon-refresh"];
```

Set titles:

```objective-c
[self.tableView.pullToRefreshView setTitle:@"Pull" forState:DRKPullToRefreshStateStopped];
[self.tableView.pullToRefreshView setTitle:@"Release" forState:DRKPullToRefreshStateTriggered];
[self.tableView.pullToRefreshView setTitle:@"Loading" forState:DRKPullToRefreshStateLoading];
```

### Manage DRKPullToRefresh

Start animating DRKPullToRefresh (```viewDidLoad```)

```objective-c
[self.tableView.pullToRefreshView startAnimating];
```

Stop animating DRKPullToRefresh

```objective-c
[self.tableView.pullToRefreshView stopAnimating];
```

Requirements
============
* iOS >= 5.0
* ARC

Contact
=======
* govirulez at gmail dot com

License
=======
DRKPullToRefresh is available under the MIT License. See the License file for more info.
