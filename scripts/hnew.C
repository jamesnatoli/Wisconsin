{
//========= Macro generated from object: hnew/Generator_weight
//========= by ROOT version6.32.06
   
   TH1F *hnew__1 = new TH1F("hnew__1","Generator_weight",100,-90000,360000);
   hnew__1->SetBinContent(7,1);
   hnew__1->SetBinContent(9,1);
   hnew__1->SetBinContent(10,2);
   hnew__1->SetBinContent(11,2);
   hnew__1->SetBinContent(12,1);
   hnew__1->SetBinContent(13,1);
   hnew__1->SetBinContent(14,3);
   hnew__1->SetBinContent(15,2);
   hnew__1->SetBinContent(16,4);
   hnew__1->SetBinContent(17,71770);
   hnew__1->SetBinContent(24,1.40048e+06);
   hnew__1->SetBinContent(25,476);
   hnew__1->SetBinContent(26,255);
   hnew__1->SetBinContent(27,201);
   hnew__1->SetBinContent(28,118);
   hnew__1->SetBinContent(29,85);
   hnew__1->SetBinContent(30,55);
   hnew__1->SetBinContent(31,50);
   hnew__1->SetBinContent(32,32);
   hnew__1->SetBinContent(33,19);
   hnew__1->SetBinContent(34,11);
   hnew__1->SetBinContent(35,18);
   hnew__1->SetBinContent(36,18);
   hnew__1->SetBinContent(37,12);
   hnew__1->SetBinContent(38,9);
   hnew__1->SetBinContent(39,9);
   hnew__1->SetBinContent(40,6);
   hnew__1->SetBinContent(41,5);
   hnew__1->SetBinContent(42,7);
   hnew__1->SetBinContent(43,5);
   hnew__1->SetBinContent(44,7);
   hnew__1->SetBinContent(45,3);
   hnew__1->SetBinContent(46,5);
   hnew__1->SetBinContent(47,5);
   hnew__1->SetBinContent(48,2);
   hnew__1->SetBinContent(49,4);
   hnew__1->SetBinContent(50,2);
   hnew__1->SetBinContent(51,3);
   hnew__1->SetBinContent(53,1);
   hnew__1->SetBinContent(54,1);
   hnew__1->SetBinContent(55,1);
   hnew__1->SetBinContent(57,2);
   hnew__1->SetBinContent(59,1);
   hnew__1->SetBinContent(61,2);
   hnew__1->SetBinContent(63,1);
   hnew__1->SetBinContent(68,2);
   hnew__1->SetBinContent(69,1);
   hnew__1->SetBinContent(80,1);
   hnew__1->SetBinContent(85,1);
   hnew__1->SetBinContent(86,1);
   hnew__1->SetBinContent(90,1);
   hnew__1->SetBinContent(92,1);
   hnew__1->SetEntries(1.4737e+06);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("hnew");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1473702");
   ptstats_LaTex = ptstats->AddText("Mean  = 1.265e+04");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   6136");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hnew__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hnew__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hnew__1->SetLineColor(ci);
   hnew__1->GetXaxis()->SetRange(1,100);
   hnew__1->GetXaxis()->SetLabelFont(42);
   hnew__1->GetXaxis()->SetTitleOffset(1);
   hnew__1->GetXaxis()->SetTitleFont(42);
   hnew__1->GetYaxis()->SetLabelFont(42);
   hnew__1->GetYaxis()->SetTitleFont(42);
   hnew__1->GetZaxis()->SetLabelFont(42);
   hnew__1->GetZaxis()->SetTitleOffset(1);
   hnew__1->GetZaxis()->SetTitleFont(42);
   hnew__1->Draw("");
}
