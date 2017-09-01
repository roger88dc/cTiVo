//
//  MTTVDBManager.h
//  cTiVo
//
//  Created by Hugh Mackworth on 6/30/17.
//  Copyright © 2017 cTiVo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MTTiVoShow.h"

@interface MTTVDB : NSObject

+ (MTTVDB *)sharedManager;

-(void) getTheTVDBDetails: (MTTiVoShow *) show;

-(void) getTheMovieDBDetails: (MTTiVoShow *) show;

-(NSDictionary *) cacheArtWork: (NSString *) newArtwork forShow: (MTTiVoShow *) show;
-(void) resetTVDBInfo:(MTTiVoShow *) show;

-(void) searchSeriesArtwork:(MTTiVoShow *) show; //called if regular artwork lookup failed

-(void) resetAll;  //destroys all caches
-(void) saveDefaults; //writes caches to userdefaults
-(NSString *) stats;
-(BOOL) isActive;

-(NSArray <NSString *> *) seriesIDsForShow: (MTTiVoShow *) show;

@end