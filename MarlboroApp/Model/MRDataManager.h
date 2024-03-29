//
//  MRDataManager.h
//  MarlboroApp
//
//  Created by DenisDbv on 30.03.14.
//  Copyright (c) 2014 brandmill. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ABMultiton/ABMultitonProtocol.h>
#import <ABMultiton/ABMultiton.h>

//Registration person data
#define NAME_REG_KEY        @"nameRegKey"
#define SECONDNAME_REG_KEY  @"secondNameRegKey"
#define SEX_REG_KEY         @"sexRegKey"
#define PHONE_REG_KEY       @"phoneRegKey"
#define EMAIL_REG_KEY       @"emailRegKey"
#define BIRTH_REG_KEY       @"birthRegKey"
#define COMMENT_REG_KEY       @"commentRegValue"

//Person data
#define NAME_KEY            @"nameKey"
#define SURNAME_KEY         @"surnameKey"
#define PATRONYMIC_KEY      @"patronymicKey"
#define PHONE_KEY           @"phoneKey"
#define SLOGAN_KEY          @"sloganKey"

//Sign type
#define FIO_SIGN_KEY        @"fioSignKey"
#define PHONE_SIGN_KEY      @"phoneSignKey"
#define SLOGAN_SIGN_KEY     @"sloganSignKey"
//-----
#define FIRSTNAME_SIGN_KEY  @"firstNameSignString"
#define SECONDNAME_SIGN_KEY @"secondNameSignString"
#define PHONESTRING_SIGN_KEY      @"phoneSignString"
#define SLOGANSTRING_SIGN_KEY     @"sloganSignString"

#define SEND_TO_EMAIL_KEY     @"sendToEmailKey"
#define SEND_TO_PRINT_KEY     @"sendToPrintKey"

#define TSHIRT_SIGN_KEY        @"tshirtSignKey"
#define LIGHTER_SIGN_KEY      @"lighterSignKey"
#define FLASHCARD_SIGN_KEY     @"flashCardSignKey"

@interface MRDataManager : NSObject <ABMultitonProtocol>

@property (nonatomic, weak) NSString *nameRegValue;
@property (nonatomic, weak) NSString *secondNameRegValue;
@property (nonatomic, weak) NSString *sexRegValue;
@property (nonatomic, weak) NSString *phoneRegValue;
@property (nonatomic, weak) NSString *emailRegValue;
@property (nonatomic, weak) NSString *birthRegValue;
@property (nonatomic, weak) NSString *commentRegValue;

@property (nonatomic, weak) NSString *nameValue;
@property (nonatomic, weak) NSString *surnameValue;
@property (nonatomic, weak) NSString *patronymicValue;
@property (nonatomic, weak) NSString *phoneValue;
@property (nonatomic) BOOL sloganValue;

@property (nonatomic) BOOL nameSignValue;
@property (nonatomic) BOOL phoneSignValue;
@property (nonatomic) BOOL sloganSignValue;

@property (nonatomic, weak) NSString *firstNameSignString;
@property (nonatomic, weak) NSString *secondNameSignString;
@property (nonatomic, weak) NSString *phoneSignString;
@property (nonatomic) BOOL sloganSignString;

@property (nonatomic) BOOL sendToEmailKey;
@property (nonatomic) BOOL sendToPrintKey;

@property (nonatomic) BOOL tshirtSignKey;
@property (nonatomic) BOOL lighterSignKey;
@property (nonatomic) BOOL flashCardSignKey;

+ (instancetype)sharedInstance;
-(void) setDefaultValue;
-(void) setDataValue:(id)dataValue forKey:(NSString*)key;

-(void) save;

@end
