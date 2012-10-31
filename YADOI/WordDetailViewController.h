//
//  WordDetailViewController.h
//  YADOI
//
//  Created by HaiLee on 12-10-30.
//  Copyright (c) 2012年 HaiLee. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WordEntity;

@interface WordDetailViewController : UITableViewController
@property (weak, nonatomic) IBOutlet UILabel *wordSpellLabel;
@property (weak, nonatomic) IBOutlet UILabel *phoneticLabel;

@property (weak, nonatomic) IBOutlet UITextView *explainsTextView;

@property (weak, nonatomic) IBOutlet UITextView *sampleSentenceTextView;

@property (nonatomic, strong) WordEntity *theWordEntity;
@end