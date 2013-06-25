//
//  SessionMetricEntry.m
//  ApigeeAppMonitoring
//
//  Created by Sam Griffith on 3/2/12.
//  Copyright (c) 2012 Apigee. All rights reserved.
//

#import "ApigeeModelUtils.h"
#import "ApigeeSessionMetrics.h"


@implementation ApigeeSessionMetrics

@synthesize appConfigType;
@synthesize appId;
@synthesize applicationVersion;
@synthesize batteryLevel;
@synthesize bearing;
@synthesize deviceCountry;
@synthesize deviceId;
@synthesize deviceModel;
@synthesize deviceOperatingSystem;
@synthesize devicePlatform;
@synthesize deviceType;
@synthesize endDay;
@synthesize endHour;
@synthesize endMinute;
@synthesize endMonth;
@synthesize endWeek;
@synthesize identifier;
@synthesize isNetworkChanged;
@synthesize isNetworkRoaming;
@synthesize latitude;
@synthesize localCountry;
@synthesize localLanguage;
@synthesize longitude;
@synthesize networkCarrier;
@synthesize networkCountry;
@synthesize networkExtraInfo;
@synthesize networkSubType;
@synthesize networkType;
@synthesize networkTypeName;
@synthesize sdkVersion;
@synthesize sdkType;
@synthesize sessionId;
@synthesize sessionStartTime;
@synthesize telephonyDeviceId;
@synthesize telephonyNetworkType;
@synthesize telephonyPhoneType;
@synthesize telephonySignalStrength;
@synthesize telephonyeNetworkOperator;
@synthesize telephonyeNetworkOperatorName;
@synthesize telephonyeSignalStrength;
@synthesize timeStamp;

- (NSDictionary*) asDictionary
{
    return [ApigeeModelUtils asDictionary:self];
}

@end
