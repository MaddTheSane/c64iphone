/*
 Frodo, Commodore 64 emulator for the iPhone
 Copyright (C) 2007-2010 Stuart Carnie
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

//! SecuredDictionaryStorage securely saves key / values to the iPhone keychain
@interface SecuredDictionaryStorage: NSObject 
+ (SecuredDictionaryStorage *)sharedInstance;
- (void) clearSecuredDictionary;
- (void) setObject: (id) anObject forKey:(NSString *) aKey;
- (void) removeObjectForKey: (NSString *) aKey;
- (id) objectForKey: (NSString *) aKey;
- (id) objectForKeyedSubscript:(NSString*)key;
- (NSMutableDictionary *) securedDictionary;
@end 
