/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <MIME/MimePart.h>


@interface MailMimePart : MimePart {
}
// inherited: +(BOOL)isRecognizedClassForContent:(id)content;
// inherited: +(Class)attachmentClass;
-(id)decodeTextRichtext;
-(id)decodeTextEnriched;
-(id)decodeTextHtml;
-(id)htmlContentToOffset:(unsigned)offset resultOffset:(unsigned*)offset2 downloadIfNecessary:(BOOL)necessary;
-(id)htmlContentToOffset:(unsigned)offset resultOffset:(unsigned*)offset2;
-(id)htmlContent;
-(void)_setDecryptedMessageBody:(id)body isEncrypted:(BOOL)encrypted isSigned:(BOOL)aSigned;
-(id)decodeTextPlain;
-(id)decodeTextCalendar;
-(id)decodeMultipartSigned;
-(id)decodeMessageDelivery_status;
-(id)decodeMessageRfc822;
-(id)decodeMessagePartial;
-(id)decodeMessageExternal_body;
-(id)decodeMultipartAppledouble;
-(id)availableBodyData;
-(id)availableHtmlContent;
-(void)loadMoreHtmlContent;
// inherited: -(id)fileWrapperForDecodedObject:(id)decodedObject withFileData:(id*)fileData;
// inherited: -(void)configureFileWrapper:(id)wrapper;
// inherited: -(void)storeData:(id)data inMessage:(id)message isComplete:(BOOL)complete;
// inherited: -(BOOL)_shouldContinueDecodingProcess;
// inherited: -(id)contentToOffset:(unsigned)offset resultOffset:(unsigned*)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL*)complete;
@end

