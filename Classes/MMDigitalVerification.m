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

#import "MMDigitalVerification.h"
#import "PKIFileVerification.h"

static unsigned char manomio_data[] = {
	// generated with: hexdump -e '8/1 "0x%0.2x," "\n"' iPhone.cer > publicKeyData.i
	#include "manomio_publickey.i"
};

static PKIFileVerification* __manomioShared;

@implementation MMDigitalVerification

+ (PKIFileVerification*)sharedManomioPublicKey {
	if (!__manomioShared) {
		NSData *keyData = [[NSData alloc] initWithBytesNoCopy:manomio_data length:sizeof(manomio_data) freeWhenDone:NO];
		__manomioShared = [[PKIFileVerification alloc] initWithCertificateData:keyData];
	}

	return __manomioShared;
}

@end
