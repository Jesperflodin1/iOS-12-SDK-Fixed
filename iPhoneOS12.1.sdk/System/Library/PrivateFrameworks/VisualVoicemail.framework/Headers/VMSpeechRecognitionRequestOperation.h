//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VisualVoicemail/VMSpeechRecognizerOperation.h>

@protocol VMSpeechRecognitionRequest;

@interface VMSpeechRecognitionRequestOperation : VMSpeechRecognizerOperation
{
    _Bool _forceOfflineRecognition;
    id <VMSpeechRecognitionRequest> _speechRecognitionRequest;
}

@property(retain) id <VMSpeechRecognitionRequest> speechRecognitionRequest; // @synthesize speechRecognitionRequest=_speechRecognitionRequest;
@property _Bool forceOfflineRecognition; // @synthesize forceOfflineRecognition=_forceOfflineRecognition;
- (void).cxx_destruct;
- (id)initWithSpeechRecognizer:(id)arg1 speechRecognitionRequest:(id)arg2;
- (id)initWithSpeechRecognizer:(id)arg1;

@end
