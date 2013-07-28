//
//  QuizViewController.h
//  Quiz
//
//  Created by John Kudos on 7/28/13.
//  Copyright (c) 2013 KUDOS LAB. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QuizViewController : UIViewController



{
    int currentQuestionIndex;

    // Declare model objects
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    // Declare view objects
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
    
}

// Declare methods
- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;



@end
