# 補足情報

## リリースノート
- 2025/03/30 : v2.2.2
  - TLAD, TBoGT：手配レベルの「★」表示を修正


- 2025/01/23 : v2.2.1
  - IV, TLAD, TBoGT：一部文字化けの修正


- 2025/01/11 : v2.2.0
  - TLAD：ギャングメンバーのステータス表示を日本語化
  - TLAD：メールの返信文がカタカナ、漢字を表示できるように修正
  - TBoGT：ゴルフのスコア表示を日本語化
  - TBoGT：ミッション完了後にヘルプテキストの領域が狭くなる問題を修正
  - TLAD, TBoGT：QUB3Dの上部スコアの位置を修正
  - IV, TLAD, TBoGT：警察端末内のフォントサイズを調整


- 2024/12/18 : v2.1.1
  - フォントの体裁を調整
  - その他文字化けの修正


- 2024/12/11 : v2.1.0
  - TBoGT, TLADのテキストをXbox360版に準拠したものに変更（gxtファイル同封済み）
  - フォントを高画質化
  - ネットカフェPCにおけるメール文章が一部文字化けしていた問題を修正


- 2024/11/25 : v2.0.1
  - 誤字修正


- 2024/11/24 : v2.0.0
  - オプションメニューに言語切り替えボタンを追加
  - TLAD, TBoGTのフォントがGTAIVのものになっていた問題を修正
  - 安定性の改善


- 2021/12/21 : v1.0.0
  - TLAD, TBoGT の日本語化
<br><br>

## 影響を受けるファイル
当MODは導入にあたり、既存のゲームファイルを一部書き換える必要があります。  
他のMODを使用している場合、以下のファイルと競合するとゲームが正しく作動しない場合があります。ご注意ください。

```
./common/data/fonts_j.dat
./common/data/frontend_menus.xml
./common/data/images.txt
./common/text/japanese.gxt
./pc/textures/fonts_j.wtd
./TBoGT/common/data/fonts_j.dat
./TBoGT/common/data/frontend_menus.xml
./TBoGT/common/data/images.txt
./TBoGT/common/text/japanese.gxt
./TBoGT/pc/textures/fonts_j.wtd
./TBoGT/content.dat
./TLAD/common/data/fonts_j.dat
./TLAD/common/data/frontend_menus.xml
./TLAD/common/data/images.txt
./TLAD/common/text/japanese.gxt
./TLAD/pc/textures/fonts_j.wtd
./TLAD/content.dat
```
<br>

## FusionFixとの併用
当MODはThirteenAG氏の「[GTAIV.EFLC.FusionFix](https://github.com/ThirteenAG/GTAIV.EFLC.FusionFix)」最新版ｖ3.5.1と併用での動作を確認しています。

FusionFixは『Grand Theft Auto IV: The Complete Edition』のバグ修正からグラフィックスの改善、拡張機能等を追加するMODです。  
これを入れるだけでGTAIVにおける既存の問題の多くが解消します。ぜひ導入することをお勧めします。

> [!WARNING]
> FusionFixを導入すると、上記内３ファイル「frontend_menus.xml」(と 一部スクリプトファイル)が競合します。  
> それを回避すべく、当MOD「GTAIV.CE.JapaneseFix」には上書き用の「update」フォルダを同封しています。  
> FusionFix導入後、このフォルダをそのままゲームディレクトリに貼り付けてください。「GTAIV.exe」が置いてある場所です。

![](./img/i_cap_03.png?raw=true)
<br><br>

## FusionFixのバージョンアップデートによる懸念
> [!CAUTION]
> 今後FusionFixのアップデートにより、「frontend_menus.xml」が変更される場合があります。  
> すると恐らく「言語切り替えボタン」が消失します。
> その際はお手数ですが、「update」内3つの「frontend_menus.xml」を手動で書き換えて（マージ）いただく必要があります。

FusionFix用「frontend_menus.xml」内の
```
<options action="MENUOPT_ADJUST" label="MO_LAN" value="PREF_CURRENT_LANGUAGE" scaler="7" displayValue="MENU_DISPLAY_LANGUAGE" />
```
の真下に
```
<!-- START -- Add for GTAIV.CE.JapaneseFix -->
<options action="MENUOPT_NONE" label="" value="PREF_NULL" scaler="0" displayValue="MENU_DISPLAY_NONE"/>
<options action="MENUOPT_ADJUST" label="Switch Language" value="PREF_CURRENT_LANGUAGE" scaler="7" displayValue="MENU_DISPLAY_NONE"/>
<!-- END -- Add for GTAIV.CE.JapaneseFix -->
```
を追記してください。各ファイル2か所ずつ、計6カ所です。
<br><br>

## FusionFixのオープニングスキップの問題
FusionFixの設定でオープニングスキップをONにしている場合、タイトル画面が日本語に切り替わるまでタイムラグが発生します。
これは言語切り替えの処理がRockstar Launcherのサインインのタイミングに依存しているため（おそらく）です。
つまり現状仕様です。

> **言語切り替えボタンを押したときの処理を任意のタイミングで呼び出す**

もしくは
> **究極、日本語orそれ以外の言語のタイトル画面切り替えを防ぐ**  

ができれば
もっとも良いのでしょうが...
今の私の知識ではこれが限界です。ご容赦ください。<br><br>


# 謝辞
このMODの制作にあたり、Xbox360版テキストを公開して頂いたkagikn氏、翻訳して頂いた有志の皆様。そして開発上参考にさせて頂いたThirteenAG氏、gennariarmando氏、CookiePLMonster氏にこの場をお借りして感謝申し上げます。上記の方々および長年のGTAMOD開発コミュニティの皆様の貢献無くしてこのMODは実現できませんでした。

また、私はプログラミングの専門家でもなく、リバースエンジニアリングに精通しているわけでもありません。
まだまだこのMODには問題点が多くあることは承知していますが、今の私の技術力ではこれ以上最適化することは厳しいと感じております。 

したがって、このMODをきっかけにより良い新たな日本語化MODが制作されること、
しいてはロックスターゲームズ社が日本語版EFLCを公式にサポートすることを心から願っております。  

長文大変失礼しました。



