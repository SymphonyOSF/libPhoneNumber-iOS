//
//  libPhoneNumbermacOS.h
//  libPhoneNumbermacOS
//
//  Created by Artem Starosvetskiy on 24/12/2016.
//  Copyright © 2016 ohtalk.me. All rights reserved.
//

#import <Cocoa/Cocoa.h>

//! Project version number for libPhoneNumbermacOS.
FOUNDATION_EXPORT double libPhoneNumbermacOSVersionNumber;

//! Project version string for libPhoneNumbermacOS.
FOUNDATION_EXPORT const unsigned char libPhoneNumbermacOSVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <libPhoneNumbermacOS/PublicHeader.h>


#import "NBPhoneNumberDefines.h"

// Features
#import "NBPhoneNumberUtil.h"
#import "NBAsYouTypeFormatter.h"

// Metadata
#import "NBMetadataCore.h"
#import "NBMetadataCoreMapper.h"
#import "NBMetadataHelper.h"

// Model
#import "NBPhoneMetaData.h"
#import "NBNumberFormat.h"
#import "NBPhoneNumber.h"
#import "NBPhoneNumberDesc.h"
