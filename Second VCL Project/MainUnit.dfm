object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'VCL Styles'
  ClientHeight = 241
  ClientWidth = 369
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object ListBox1: TListBox
    Left = 8
    Top = 8
    Width = 169
    Height = 225
    ItemHeight = 13
    TabOrder = 0
  end
  object Button1: TButton
    Left = 192
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Load'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 280
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Apply'
    TabOrder = 2
    OnClick = Button2Click
  end
  object OpenDialog1: TOpenDialog
    Left = 280
    Top = 168
  end
end
