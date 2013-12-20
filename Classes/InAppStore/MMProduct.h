/*
 Frodo, Commodore 64 emulator for the iPhone
 Copyright (C)	
 See gpl.txt for license information.
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#import <Foundation/Foundation.h>

@class SKProduct;

/*! Represents a product that can be downloaded
 */
@interface MMProduct : NSObject {
	NSDictionary					*_mmData;		// data from manomio.com
	SKProduct						*_product;
	BOOL							_installing;
	CGFloat							_downloadPercent;
}

- (id)initWithDictionary:(NSDictionary*)dict andProduct:(SKProduct*)product;

@property (nonatomic, readonly, strong) SKProduct*	product;
@property (weak, nonatomic, readonly) NSString* imagePath;
@property (weak, nonatomic, readonly) NSString* productIdentifier;
@property (weak, nonatomic, readonly) NSString* title;
@property (weak, nonatomic, readonly) NSString* productDescription;
@property (weak, nonatomic, readonly) NSString* status;
@property (weak, nonatomic, readonly) NSString* publisherNotes;
@property (nonatomic, readonly) BOOL isFree;

// installation
@property (nonatomic) BOOL installing;
@property (nonatomic) CGFloat downloadPercent;

@end

extern NSString* kProductIdentifierKey;
extern NSString* kCoverImageKey;
extern NSString* kTitleKey;
extern NSString* kDescriptionKey;
extern NSString* kIsFree;
extern NSString* kStatus;
extern NSString* kPublisherNotes;
