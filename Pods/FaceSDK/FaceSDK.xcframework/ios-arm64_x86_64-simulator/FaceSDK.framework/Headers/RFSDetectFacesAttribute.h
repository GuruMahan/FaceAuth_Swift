//
//  RFSDetectFacesAttributeName.h
//  FaceSDK
//
//  Created by Serge Rylko on 15.08.22.
//  Copyright © 2022 Regula. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NSString *RFSDetectFacesAttribute NS_TYPED_ENUM NS_SWIFT_NAME(DetectFacesAttribute);
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeAge;
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeEyeLeft;
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeEyeRight;
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeEmotion;
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeSmile;
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeGlasses;
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeHeadCovering;
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeForeheadCovering;
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeMouth;
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeMedicalMask;
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeOcclusion;
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeStrongMakeup;
FOUNDATION_EXPORT RFSDetectFacesAttribute const RFSDetectFacesAttributeHeadphones;
