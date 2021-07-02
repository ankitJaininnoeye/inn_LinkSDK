//
//  Utility.h
//  SpeedTest
//
//  Created by Rohit Gupta on 18/04/19.
//  Copyright © 2019 IST-756. All rights reserved.
//

#ifndef Utility_h
#define Utility_h

@interface Utility : NSObject {
    
}



+ (NSArray *) getPassiveDataCounter: (NSString*)strCurrentNetwork;
+ (NSString*) decryptDataFor128: (NSString*)str_TobeDecrypt;
+ (NSString*) encryptDataFor128: (NSString*)str_Encrypt;
+ (NSDictionary *)getIPAddresses;
+ (NSString *)getIPAddress;
+ (NSString *)getIPAddress:(BOOL)preferIPv4;
+ (NSDictionary *)getIPV6Address;
+ (NSArray *)getPassiveDataCounters;
+ (NSString*)XMLstringfromBinary:(NSString*)binaryString;
+ (NSString *)displayAddressForAddress:(NSData *)address;

@end



#endif /* Utility_h */


