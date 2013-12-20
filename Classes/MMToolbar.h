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

@protocol MMToolbarChangedDelegate
@required
- (void)changed:(NSUInteger)index;
@end

@interface MMToolbar : UIView {
	id<MMToolbarChangedDelegate>	delegate;
	NSUInteger						selectedIndex;
}

@property (nonatomic, strong)	id<MMToolbarChangedDelegate>	delegate;
@property (nonatomic)			NSUInteger						selectedIndex;

- (id)initWithFrame:(CGRect)frame upImages:(NSArray*)upImages downImages:(NSArray*)downImages;

@end
