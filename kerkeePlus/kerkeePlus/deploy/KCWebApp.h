//
//  KCWebApp.h
//  kerkeePlus
//
//  Created by zihong on 16/6/17.
//  Copyright © 2016年 zihong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <kerdb/KCDBObject.h>
#import <KCURI.h>
#import <KCFile.h>

@interface KCWebApp : NSObject <KCDBObject>

- (id)initWithID:(int)aID rootPath:(KCFile*)aRootPath manifestUri:(KCURI*)aManifestUri;

//If ID = 0, that means the Webapp that contains all of the Webapps, and these all webapps in a file
@property (nonatomic, readonly, assign) int mID;
//webapp's root manifest url
@property (nonatomic, readonly, strong) KCURI* mManifestURI;
@property (nonatomic, readonly, strong) KCFile* mRootPath;
@property (nonatomic, strong)id mTag;

- (NSString*)getVersion;


@end