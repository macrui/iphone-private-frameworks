/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASPolicyManager.h"

@class NSString;

@interface ASClientPolicyManager : ASPolicyManager {
	NSString* _policyKey;
}
// inherited: -(void)dealloc;
-(void)_setPolicyKey:(id)key;
-(void)_populateCurrentKey;
// inherited: -(void)policyKeyChanged:(id)changed;
// inherited: -(void)requestPolicyUpdate;
// inherited: -(id)currentPolicyKey;
@end
