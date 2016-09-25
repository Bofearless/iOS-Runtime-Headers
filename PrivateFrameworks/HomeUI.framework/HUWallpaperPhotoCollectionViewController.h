/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperPhotoCollectionViewController : UICollectionViewController <PHPhotoLibraryChangeObserver> {
    int  _assetCollectionSubtype;
    PHFetchResult * _assetsFetchResult;
    <HUWallpaperPhotoCollectionViewControllerDelegate> * _delegate;
    HUWallpaperPhotoCollectionFlowLayout * _flowLayout;
    NAFuture * _imageDownloadFuture;
    PHCachingImageManager * _imageManager;
    BOOL  _initialScrollToBottom;
}

@property (nonatomic, readonly) int assetCollectionSubtype;
@property (nonatomic, retain) PHFetchResult *assetsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HUWallpaperPhotoCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) HUWallpaperPhotoCollectionFlowLayout *flowLayout;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NAFuture *imageDownloadFuture;
@property (nonatomic, retain) PHCachingImageManager *imageManager;
@property (nonatomic) BOOL initialScrollToBottom;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)assetCollectionSubtype;
- (id)assetsFetchResult;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (id)flowLayout;
- (id)imageDownloadFuture;
- (id)imageFutureForAsset:(id)arg1 cloudAllowed:(BOOL)arg2;
- (id)imageManager;
- (id)initWithTitle:(id)arg1 fetchResult:(id)arg2 assetCollectionSubtype:(int)arg3 delegate:(id)arg4;
- (BOOL)initialScrollToBottom;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setAssetsFetchResult:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setImageDownloadFuture:(id)arg1;
- (void)setImageManager:(id)arg1;
- (void)setInitialScrollToBottom:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end