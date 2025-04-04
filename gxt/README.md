# フォントファイル制作メモ
## テキストについて
- PC版のキーを基準とし、内容をXbox360版に差し替えています。
- PC版にしか存在しないキーは有志翻訳を使用しています。
- IV本編のテキストについては、一部文字化けの修正をしたのみで現行のままです。
- チュートリアルの文言等もXbox360版に差し替わっています。そのため一部言い回し等の表記ゆれがあります。また \~変数名~がXbox360版になっていますが、とくに問題なさそう？なので一旦このままにしています。
- 全体を機械的にマージしたので、すべて確認しきれていません。ご了承ください。

## テキストの修正について
- テキストファイルの変換にはSergeanur氏の「[GXT-compiler](https://github.com/Sergeanur/GXT-compiler)」を使用しています。
- 「GXTCompiler」ディレクトリにgxt.exeを置いた上で、バッチファイルから変換できるようにしています。（_テキストファイル抽出.bat, _GXTファイル生成.bat）
- バッチファイルは.txtや.gxtファイルを強制的に上書きするので注意してください。
- .txtは同階層に抽出、.gxtは「release」ディレクトリ以下の各「text」ディレクトリに直接生成（上書き）されます。

## フォントマップについて
- フォントマップサイズ：2048x2048／横49文字 縦48文字／一文字サイズ 41x41／使用可能文字数 2334
- 使用フォント：英数字他 Xbox360版を流用／日本語 Noto Sans JP ExtraBold
- マップと実際の文字の違い：◆→ロックスターロゴ, ◇→™、◎→〇

## FontGenerator
- このツールは個人作業用に作ったものなので、ガバガバです。ご了承ください。windows11環境のchromeでしか確認していなので、他のブラウザではフォントマップ含め表示が崩れるかもしれません。
- テキストファイルを抽出し、ローカルサーバで「FontGenerator.html」にアクセスし「生成」ボタンを押すと、当MODで使用している各フォントテーブルとマップが生成されます。
- 有志翻訳の変換ツール「GTA4GXTConvertor」用CSVもついでに生成されます。
- マップの生成には「[Noto Sans JP ExtraBold](https://fonts.google.com/noto/specimen/Noto+Sans+JP)」が必要です。

