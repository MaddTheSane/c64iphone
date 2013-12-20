//
//  ASIAuthenticationDialog.h
//  iPhone
//
//  Created by Ben Copsey on 21/08/2009.
//  Copyright 2009 All-Seeing Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>
@class ASIHTTPRequest;

typedef enum _ASIAuthenticationType {
	ASIStandardAuthenticationType = 0,
    ASIProxyAuthenticationType = 1
} ASIAuthenticationType;
	
@interface ASIAuthenticationDialog : NSObject <UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource> {
	ASIHTTPRequest *request;
	UIActionSheet *loginDialog;
	ASIAuthenticationType type;
}
+ (void)presentAuthenticationDialogForRequest:(ASIHTTPRequest *)request;
+ (void)presentProxyAuthenticationDialogForRequest:(ASIHTTPRequest *)request;

@property (strong) ASIHTTPRequest *request;
@property (strong) UIActionSheet *loginDialog;
@property ASIAuthenticationType type;
@end
