# 【PC版】Grand Theft Auto IV: The Complete EditionのDLC2作品（EFLC）を日本語でプレイする

最終更新：2025.03.30　　最新バージョン：v2.2.2

![](./img/i_ttl_01.jpg?raw=true)<br><br>

## はじめに
2025年現在、Steamで購入できるPC版『グランド・セフト・オートIV：コンプリート・エディション』には、  
GTAIV本編に加えて2つのDLC『ザ・ロスト・アンド・ダムド』（通称TLAD）、『バラッド・オブ・ゲイ・トニー』（通称TBoGT）が収録されています。

**しかし、このDLC2作品は日本語に対応しておらず、  
プレイするにはSteamの言語設定を英語にしなければなりません。**

当然中身も英語なので、敬遠してプレイを諦める方も多いかと思われます。  
...それではあまりにももったいないので、DLC2作品を日本語でプレイできるようMODを作りました。
<br><br>

## GTAIV.CE.JapaneseFix の特徴
- GTAIV Complete Editionで動作（従来のようにダウングレードする必要はありません）
- Steamの言語設定は日本語のままでOK（Rockstar Launcherも日本語で起動、実績解除も可）
- DLC2作品の日本語化に加え本編の一部文字化けを修正・フォントを高画質化
- リリースノート等の情報は「[補足情報](NOTES.md)」をご確認ください。

<br>

## 必要なもの
- Ultimate-ASI-Loader 　[Ultimate-ASI-Loader.zip](https://github.com/ThirteenAG/Ultimate-ASI-Loader/releases/latest/download/Ultimate-ASI-Loader.zip)
- GTAIV.CE.JapaneseFix　[GTAIV.CE.JapaneseFix.zip](https://github.com/prjct-samwest/GTAIV.CE.JapaneseFix/releases/latest/download/GTAIV.CE.JapaneseFix.zip)
  <br><br>

## 手順
### 1.導入前の確認
- ゲームが最新バージョンであり、問題なく起動できるか確認してください。
- Steamの言語設定が日本語以外になっている場合は日本語に戻しておいてください。
- 上記「必要なもの」からzipファイルを2つダウンロードしてください。
> [!WARNING]
> 当MODは一部ゲームファイルを上書きします。  
> すでに他のMODを使用している場合は競合に注意してください。<br>詳細は「[補足情報](NOTES.md)」をご確認ください。

<br>

### 2.ゲームのインストールディレクトリを開く
GTAIVがインストールされているディレクトリを開いて、ファイルを追加する準備をします。  
- ```C:\Program Files (x86)\Steam\steamapps\common\Grand Theft Auto IV\GTAIV\```  
  ※場所はインストール環境によって変わります<br><br>

### 3.Ultimate-ASI-Loader
ダウンロードした「Ultimate-ASI-Loader」内の「dinput8.dll」をゲームディレクトリ直下に貼り付けます。「GTAIV.exe」が置いてある場所です。
- ```C:\Program Files (x86)\Steam\steamapps\common\Grand Theft Auto IV\GTAIV\```  
  ※場所はインストール環境によって変わります

![](./img/i_cap_01.png?raw=true)<br><br>

### 4.GTAIV.CE.JapaneseFix
同様に、ダウンロードした「GTAIV.CE.JapaneseFix」内の更に「GTAIV.CE.JapaneseFix」にある
- 「common」ディレクトリ
- 「pc」ディレクトリ
- 「TBoGT」ディレクトリ
- 「TLAD」ディレクトリ
- 「GTAIV.CE.JapaneseFix.asi」

の5つをゲームディレクトリ直下に貼り付けます。「GTAIV.exe」が置いてある場所です。


- ```C:\Program Files (x86)\Steam\steamapps\common\Grand Theft Auto IV\GTAIV\```  
  ※場所はインストール環境によって変わります

![](./img/i_cap_02.png?raw=true)

> [!NOTE]
> FusionFixを導入している場合は、「― FusionFix 上書き用 ―」にある「update」ディレクトリも一緒にゲームディレクトリ直下へ貼り付けてください。  
> FusionFix併用に関する情報と詳細については、「[補足情報](NOTES.md)」をご確認ください。


<br><br>

### 5.ゲームを起動し、日本語に設定する
ゲームを起動すると英語になっているので、以下の画像を参考に  
「Options」→「Display」から「Switch Language」を数回押して日本語に切り替えてください。   
併せて、字幕も「ON」になっているか確認しておきましょう。

![](./img/i_setting.gif?raw=true)<br><br>


### 6.ストーリーを開始し、日本語になっていたら成功です。
次回以降は日本語設定は必要ありません。※最初の警告文は英語のままです。

<img src="./img/i_ss_01.jpg?raw=true" width="400">  <img src="./img/i_ss_02.jpg?raw=true" width="400"><br><br>

## 免責事項
- 当MODは『コンプリート・エディション』最新版（Ver.1.2.0.59）専用です。旧バージョンではおそらく動作しません。
- 当MODはWindows11, Steam版での動作を確認しています。  
  Rockstar Launcher版は確認していないため、正しく機能するか分かりません。
- 当MODはあくまで【 非公式の改造プログラム 】であるため、今後ソフトウェアアップデートによって機能しなくなる場合があります。
- 当MODを利用した事によるいかなる損害も作者は一切の責任を負いません。自己責任の上ご利用ください。
- 当MODにおけるリリースノート等の情報は「[補足情報](NOTES.md)」をご確認ください。


