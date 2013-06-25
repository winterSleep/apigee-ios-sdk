//
//  ApigeeAppIdentification.h
//  InstaOpsAppMonitor
//
//  Created by Paul Dardeau on 4/17/13.
//  Copyright (c) 2013 InstaOps. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ApigeeAppIdentification : NSObject
{
    NSString* _organizationId;
    NSString* _applicationId;
    NSString* _organizationUUID;
    NSString* _applicationUUID;
    NSString* _baseURL;
}

@property (copy,nonatomic) NSString* organizationId;
@property (copy,nonatomic) NSString* applicationId;
@property (copy,nonatomic) NSString* organizationUUID;
@property (copy,nonatomic) NSString* applicationUUID;
@property (copy,nonatomic) NSString* baseURL;


- (id)initWithOrganizationId:(NSString*)organizationId
               applicationId:(NSString*)applicationId;

- (id)initWithOrganizationUUID:(NSString*)organizationUUID
               applicationUUID:(NSString*)applicationUUID;

- (NSString*)uniqueIdentifier;

@end
