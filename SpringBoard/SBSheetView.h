/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>

@class SBApplication, SBProxyRemoteView;

@interface SBSheetView : UIView {
	SBProxyRemoteView* _remoteProxyView;
	SBApplication* _app;
}
-(id)initWithRemoteViewIdentifier:(id)remoteViewIdentifier application:(id)application;
-(id)remoteViewIdentifier;
-(id)application;
-(void)noteSheetDidEnd;
// inherited: -(void)dealloc;
@end
