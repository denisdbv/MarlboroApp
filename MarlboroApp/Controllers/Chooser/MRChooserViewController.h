//
//  MRChooserViewController.h
//  MarlboroApp
//
//  Created by DenisDbv on 28.03.14.
//  Copyright (c) 2014 brandmill. All rights reserved.
//

#import "MRParentViewController.h"
#import "PMActivationView.h"

@interface MRChooserViewController : MRParentViewController

-(id) initWithTitle:(NSString*)title withCheckboxList:(NSDictionary*)checkListDictionary :(ActivationIDs)activeID;

@end
