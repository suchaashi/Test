﻿================================================================================
    MFC (MICROSOFT FOUNDATION CLASS) ライブラリ : MFCApplication1 プロジェクトの概要
===============================================================================

この MFCApplication1 アプリケーションは、アプリケーション ウィザードによって作成されました。このアプリケーションは MFC の基本的な使い方を示すだけでなく、アプリケーションを作成するための開始点でもあります。

このファイルには、MFCApplication1 アプリケーションを構成する各ファイルの内容の概要が含まれています。

MFCApplication1.vcxproj
    これは、アプリケーション ウィザードで生成された VC++ プロジェクトのメイン プロジェクト ファイルです。ファイルを生成した Visual C++ のバージョンに関する情報と、アプリケーション ウィザードで選択されたプラットフォーム、構成、およびプロジェクト機能に関する情報が含まれています。

MFCApplication1.vcxproj.filters
    これは、アプリケーション ウィザードで生成された VC++ プロジェクトのフィルター ファイルです。このファイルには、プロジェクト内のファイルとフィルターとの間の関連付けに関する情報が含まれています。この関連付けは、特定のノードで同様の拡張子を持つファイルのグループ化を示すために IDE で使用されます (たとえば、".cpp" ファイルは "ソース ファイル" フィルターに関連付けられています)。

MFCApplication1.h
    これはアプリケーションのメイン ヘッダー ファイルです。
    その他のプロジェクト固有のヘッダー (Resource.h など) が含まれ、CMFCApplication1App アプリケーション クラスを宣言します。

MFCApplication1.cpp
    これはメインのアプリケーション ソース ファイルで、CMFCApplication1App アプリケーション クラスが含まれています。

MFCApplication1.rc
    これは、プログラムが使用するすべての Microsoft Windows リソースの一覧です。RES サブディレクトリに格納されるアイコン、ビットマップ、およびカーソルをインクルードしています。このファイルは、Microsoft Visual C++ で直接編集できます。プロジェクト リソースは 1041 にあります。

res\MFCApplication1.ico
    これはアプリケーションのアイコンとして使用されるアイコン ファイルです。このアイコンは、メイン リソース ファイル MFCApplication1.rc にインクルードされます。

res\MFCApplication1.rc2
    このファイルには、Microsoft Visual C++ で編集しないリソースが含まれています。リソース エディターで編集できないすべてのリソースは、このファイルに含める必要があります。

/////////////////////////////////////////////////////////////////////////////

メイン フレーム ウィンドウ:
    プロジェクトには標準の MFC インターフェイスが含まれます。

MainFrm.h, MainFrm.cpp
    これらのファイルには、フレーム クラス CMainFrame が含まれます。このクラスは
    CFrameWnd から派生し、すべての SDI フレーム機能を制御します。

res\Toolbar.bmp
    このビットマップ ファイルは、ツール バーのイメージを作成するために使用されます。
    初期ツール バーと初期ステータス バーは、CMainFrame クラスで生成されます。ツール バーのボタンを追加するには、リソース エディターを使用してこのツール バーのビットマップを編集し、MFCApplication1.rc 内の IDR_MAINFRAME TOOLBAR 配列を更新します。
/////////////////////////////////////////////////////////////////////////////

アプリケーション ウィザードは 1 つのドキュメントの種類と 1 つのビューを作成します。

MFCApplication1Doc.h, MFCApplication1Doc.cpp - ドキュメント
    これらのファイルには、CMFCApplication1Doc クラスが含まれます。これらのファイルを編集して、特殊なドキュメント データを追加し、ファイルの保存と読み込みを実装することができます (CMFCApplication1Doc::Serialize を使用)。

MFCApplication1View.h, MFCApplication1View.cpp - ドキュメントのビュー
    これらのファイルには、CMFCApplication1View クラスが含まれます。
    CMFCApplication1View オブジェクトは CMFCApplication1Doc オブジェクトを表示するために使用されます。




/////////////////////////////////////////////////////////////////////////////

その他の機能:

ActiveX コントロール
    ActiveX コントロールを使用するためのサポートがアプリケーションに含まれます。

印刷と印刷プレビューのサポート
    MFC ライブラリから CView クラス内のメンバー関数を呼び出すことによって、アプリケーション ウィザードで、印刷、印刷設定、および印刷プレビューのコマンドを処理するコードが生成されました。

/////////////////////////////////////////////////////////////////////////////

その他の標準ファイル :

StdAfx.h, StdAfx.cpp
    これらのファイルは、MFCApplication1.pch という名前のプリコンパイル済みヘッダー (PCH) ファイルと、StdAfx.obj という名前のプリコンパイル済みの型ファイルをビルドするために使用されます。

Resource.h
    これは、新しいリソース ID を定義する標準のヘッダー ファイルです。このファイルの読み込みおよび更新は、Microsoft Visual C++ で行います。

MFCApplication1.manifest
	アプリケーション マニフェスト ファイルは、Windows XP で、特定のバージョンの side-by-side アセンブリに対するアプリケーションの依存関係を説明するために使用されます。ローダーはこの情報を使用して、アセンブリ キャッシュから適切なアセンブリを、またはアプリケーションからプライベート アセンブリを読み込みます。アプリケーション マニフェストは、再頒布用に、アプリケーションの実行可能ファイルと同じフォルダーにインストールされる外部 .manifest ファイルとして含まれているか、またはリソースのフォーム内の実行可能ファイルに含まれています。
/////////////////////////////////////////////////////////////////////////////

その他のメモ :

アプリケーション ウィザードでは "TODO:" を使用して、ユーザーが追加またはカスタマイズする必要のあるソース コードを示します。

アプリケーションが共有 DLL 内で MFC を使用する場合は、MFC DLL を再頒布する必要があります。アプリケーションがオペレーティング システムのロケール以外の言語を使用している場合、対応するローカライズされたリソース mfc110XXX.DLL も再頒布する必要があります
これらのトピックの詳細については、MSDN ドキュメントの Visual C++ アプリケーションの再頒布に関するセクションを参照してください。

/////////////////////////////////////////////////////////////////////////////
