#include "stdafx.h"
#include "AddyLocations.h"
#include "codecaves.h"
#include "FixIme.h"
#include "FixBuddy.h"

int Client::m_nGameHeight = 720;
int Client::m_nGameWidth = 1280;
int Client::MsgAmount = 26;
bool Client::CustomLoginFrame = true;
bool Client::WindowedMode = true;
bool Client::RemoveLogos = true;
int Client::setDamageCap = 199999;
int Client::setMAtkCap = 1999;
int Client::setAccCap = 999;
int Client::setAvdCap = 999;
double Client::setAtkOutCap = 199999;
bool Client::useTubi = false;
bool Client::bigLoginFrame = false;
bool Client::SwitchChinese = false;
int Client::speedMovementCap = 140;
bool Client::noPassword = false;
bool Client::debug = false;
bool Client::climbSpeedAuto = false;
float Client::climbSpeed = 1.0;
unsigned char Client::imeType = 1;
std::string Client::ServerIP_AddressFromINI = "127.0.0.1";
int Client::serverIP_Port = 8484;
bool Client::talkRepeat = false;
int Client::talkTime = 2000;

void Client::UpdateGameStartup() {
	//Memory::CodeCave(cc0x0044E550, dw0x0044E550, dw0x0044E550Nops); //run from packed client //skip //sub_44E546
	//Memory::CodeCave(cc0x0044E5BE, dw0x0044E5BE, dw0x0044E5BENops); //run from packed client //skip

	//Memory::CodeCave(cc0x0044E5DB, dw0x0044E5DB, dw0x0044E5DBNops); //run from packed client //skip //sub_44E5D5 (defined function)
	//Memory::CodeCave(cc0x0044E6AC, dw0x0044E6AC, dw0x0044E6ACNops); //run from packed client //skip

	//Memory::CodeCave(cc0x0044E71D, dw0x0044E71D, dw0x0044E71DNops); //run from packed client //skip //sub_44E716 (defined function)
	//Memory::CodeCave(cc0x0044E80C, dw0x0044E80C, dw0x0044E80CNops); //run from packed client //skip

	//Memory::CodeCave(cc0x0044E8B4, dw0x0044E8B4, dw0x0044E8B4Nops); //run from packed client //skip //sub_44E88E
	//Memory::CodeCave(cc0x0044EA22, dw0x0044EA22, dw0x0044EA22Nops); //run from packed client //skip

	//Memory::CodeCave(cc0x0044EA6F, dw0x0044EA6F, dw0x0044EA6FNops); //run from packed client //skip //sub_44EA64
	//Memory::CodeCave(cc0x0044EBD6, dw0x0044EBD6, dw0x0044EBD6Nops); //run from packed client //skip

	//Memory::CodeCave(cc0x0044ECA1, dw0x0044ECA1, dw0x0044ECA1Nops); //run from packed client //skip //sub_44EC9C
	//Memory::CodeCave(cc0x0044ED32, dw0x0044ED32, dw0x0044ED32Nops); //run from packed client //skip

	//Memory::CodeCave(cc0x0044ED52, dw0x0044ED52, dw0x0044ED52Nops); //run from packed client //skip	//sub_44ED47
	//Memory::CodeCave(cc0x0044EED3, dw0x0044EED3, dw0x0044EED3Nops); //run from packed client //skip

	//Memory::CodeCave(cc0x00494943, dw0x00494943, dw0x00494943Nops); //run from packed client //skip //sub_494931
	//Memory::CodeCave(cc0x00494BB6, dw0x00494BB6, dw0x00494BB6Nops); //run from packed client //skip

	//Memory::CodeCave(cc0x00494CA9, dw0x00494CA9, dw0x00494CA9Nops); //run from packed client //skip //sub_494CA3
	//Memory::CodeCave(cc0x00494CF0, dw0x00494CF0, dw0x00494CF0Nops); //run from packed client //skip

	//Memory::CodeCave(cc0x00494D3B, dw0x00494D3B, dw0x00494D3BNops); //long jmp //??CClientSocket::Connect=sub_494D2F-494ECE //CClientSocket::Connect: Skip IP checks by changing short jmp at beginning of the method to long jmp that goes to the client socket code
	//Memory::CodeCave(cc0x00494EAF, dw0x00494EAF, dw0x00494EAFNops); //run from packed client //skip	//??CClientSocket //??

	//Memory::CodeCave(cc0x00494EEC, dw0x00494EEC, dw0x00494EECNops); //run from packed client //skip //sub_494ED1
	//Memory::CodeCave(cc0x00494F87, dw0x00494F87, dw0x00494F87Nops); //run from packed client //skip

	//Memory::CodeCave(ccCLoginSendCheckPasswordPacket, dwCLoginSendCheckPasswordPacket, CLoginSendCheckPasswordPacketNops); //CLogin::SendCheckPasswordPacket: At the start of the sequence of pushes that contains 0C9h, place a long jmp to further down in the method to the SystemInfo basic block.Do auth patches for encoding the correct strings(user / pw)
	//Memory::WriteByte(0x005F6B87 + 2, 0x08); //CLogin::SendCheckPasswordPacket/sub_5F6952 //??
	//Memory::WriteByte(0x005F6BA0 + 2, 0xA0); //CLogin::SendCheckPasswordPacket //??
	//unsigned char CA_005F6BA4[] = { 0xFF, 0x75, 0x0C, 0x90, 0x90, 0x90, 0x90 }; //CLogin::SendCheckPasswordPacket //??
	//Memory::WriteByteArray(0x005F6BA4, CA_005F6BA4, sizeof(CA_005F6BA4)); //CLogin::SendCheckPasswordPacket //??

	//Memory::FillBytes(0x009F1C04, 0x90, 5);//run from packed client //WinMain: nop ShowStartUpWndModal
	//Memory::WriteByte(0x009F242F, 0xEB); //run from packed client //WinMain: jz->jmp for ShowADBalloon code (pretty much at the end of method, above push with small number)

	//Memory::CodeCave(cc0x009F4E84, dw0x009F4E84, dw0x009F4E84Nops); //run from packed client //skip	//sub_9F4E54
	//Memory::CodeCave(cc0x009F4EC3, dw0x009F4EC3, dw0x009F4EC3Nops); //run from packed client //skip

	//Memory::CodeCave(cc0x009F4F12, dw0x009F4F12, dw0x009F4F12Nops); //run from packed client //skip	//sub_9F4F09 (defined function)
	//Memory::CodeCave(cc0x009F4FC6, dw0x009F4FC6, dw0x009F4FC6Nops); //run from packed client //skip

	//Memory::CodeCave(cc0x009F503C, dw0x009F503C, dw0x009F503CNops); //run from packed client //skip	//sub_9F4FDA
	//Memory::CodeCave(cc0x009F51A7, dw0x009F51A7, dw0x009F51A7Nops); //run from packed client //skip	//??CWvsApp::CallUpdate

	//Memory::CodeCave(cc0x009F526F, dw0x009F526F, dw0x009F526FNops); //run from packed client //long jump //sub_9F5239-9F5C4F
	//Memory::CodeCave(cc0x009F5653, dw0x009F5653, dw0x009F5653Nops); //run from packed client //skip
	//Memory::CodeCave(cc0x009F5833, dw0x009F5833, dw0x009F5833Nops); //run from packed client //long jump
	//Memory::CodeCave(cc0x009F5C2C, dw0x009F5C2C, dw0x009F5C2CNops); //run from packed client //skip

	//Memory::CodeCave(cc0x009F5CA3, dw0x009F5CA3, dw0x009F5CA3Nops); //dwCWvsAppRun=sub_9F5C50-9F698D CWvsApp::Run: After CClientSocket::ManipulatePacket, long jmp to "push 0FFh push 0 push 0"
	//Memory::CodeCave(cc0x009F5FBD, dw0x009F5FBD, dw0x009F5FBDNops); //run from packed client	//dwCWvsAppRun	//??
	//unsigned char CA_009F62E2[] = { 0x8B, 0x0D, 0xA8, 0xC3, 0xBE, 0x00,  0x90, 0x90, 0x90, 0x90, 0x90 }; //CWvsApp::Run: nop?
	//Memory::WriteByteArray(0x009F62E2, CA_009F62E2, sizeof(CA_009F62E2)); //dwCWvsAppRun //CWvsApp::Run: nop call to CSecurityClient::Update while we're at it
	//Memory::CodeCave(cc0x009F631C, dw0x009F631C, dw0x009F631CNops); //run from packed client	//dwCWvsAppRun	//??
	//Memory::CodeCave(cc0x009F691F, dw0x009F691F, dw0x009F691FNops); //dwCWvsAppRun //CWvsApp::Run: Below IWzGr2D::RenderFrame (where it does 0-100 rand stuff), place long jmp to push 1; call Sleep way down in the method
	////??CWvsApp::Run: At the end of the method, there's a call to _free, followed by add esp, 4, followed by a cmp ..., 12h. Skip the free by jmping straight to the cmp.

	//Memory::CodeCave(cc0x009F6F36, dw0x009F6F36, dw0x009F6F36Nops); //run from packed client //skip	//sub_9F6F27
	//Memory::CodeCave(cc0x009F6F5C, dw0x009F6F5C, dw0x009F6F5CNops); //run from packed client //skip	//near closesocket down

	//Memory::CodeCave(cc0x009F7CFA, dw0x009F7CFA, dw0x009F7CFANops); //run from packed client //skip //sub_9F7CE1 
	//Memory::CodeCave(cc0x009F7D83, dw0x009F7D83, dw0x009F7D83Nops); //run from packed client //long jump //??CWvsApp::InitializeInput
	//Memory::CodeCave(cc0x009F81FB, dw0x009F81FB, dw0x009F81FBNops); //run from packed client //skip //sub_9F7CE1 

	//Memory::CodeCave(cc0x009F84E9, dw0x009F84E9, dw0x009F84E9Nops); //run from packed client //skip //sub_9F84D0
	//Memory::CodeCave(cc0x009F8AD4, dw0x009F8AD4, dw0x009F8AD4Nops); //run from packed client //skip

	//Memory::CodeCave(cc0x00A4BB39, dw0x00A4BB39, dw0x00A4BB39Nops); //run from packed client //skip //sub_A4BB2B
	//Memory::CodeCave(cc0x00A4BC79, dw0x00A4BC79, dw0x00A4BC79Nops); //run from packed client //skip

	//Memory::CodeCave(cc0x00A4BD05, dw0x00A4BD05, dw0x00A4BD05Nops); //run from packed client //skip //sub_A4BCFF
	//Memory::CodeCave(cc0x00A4BD4E, dw0x00A4BD4E, dw0x00A4BD4ENops); //run from packed client //skip

	//Memory::CodeCave(cc0x00A4BD99, dw0x00A4BD99, dw0x00A4BD99Nops); //run from packed client //skip //sub_A4BD91
	//Memory::CodeCave(cc0x00A4BDE3, dw0x00A4BDE3, dw0x00A4BDE3Nops); //run from packed client //skip

	//Memory::CodeCave(cc0x00A4BDFE, dw0x00A4BDFE, dw0x00A4BDFENops); //run from packed client //skip //sub_A4BDF8
	//Memory::CodeCave(cc0x00A4BE47, dw0x00A4BE47, dw0x00A4BE47Nops); //run from packed client //skip

	//unsigned char CA_00E93220[] = { 0x00, 0x00, 0x00, 0x43, 0x6F, 0x43, 0x72, 0x65,  0x61, 0x74, 0x65, 0x47, 0x75, 0x69, 0x64, 0x00 }; //run from packed client //addr 00E93220 //??
	//Memory::WriteByteArray(0x00E93220, CA_00E93220, sizeof(CA_00E93220)); //run from packed client //addr 00E93220 //??

	Memory::FillBytes(0x00C08459, 0x20, 0x00C0846E - 0x00C08459);//remove elevation requests
	Memory::WriteByte(0x00C08459, 0x22);//remove elevation requests	//thanks stelmo for showing me how to do this
	Memory::WriteString(0x00C08459 + 1, "asInvoker");//remove elevation requests	//not working from dll
	Memory::WriteByte(0x00C08463, 0x22);//remove elevation requests	//thanks stelmo for showing me how to do this
	Memory::WriteByte(0x0049C2CD + 1, 0x01);//remove elevation requests	//still not working unfortunately	//still keeping this to checks for admin privilege
	Memory::WriteByte(0x0049CFE8 + 1, 0x01);//likely requires affecting WINAPI CreateProcess, which requires a launcher		//because a packed client cannot be directly edited for these offsets
	Memory::WriteByte(0x0049D398 + 1, 0x01);//remove elevation requests	//still not working unfortunately

	Memory::FillBytes(0x00AFE084, 0x00, 0x006FE0B2 - 0x006FE084);//remove the existing server IP address in client
	const char* serverIP_Address = Client::ServerIP_AddressFromINI.c_str();
	Memory::WriteString(0x00AFE084, serverIP_Address);//write the user-set IP address
	Memory::WriteString(0x00AFE084 + 16, serverIP_Address);//write the user-set IP address
	Memory::WriteString(0x00AFE084 + 32, serverIP_Address);//write the user-set IP address
	Memory::WriteInt(0x007519C1 + 1, serverIP_Port);//登录端口

	//optional non-resolution related stuff
	if (useTubi) { Memory::FillBytes(0x00485C32, 0x90, 2); }

	Memory::WriteInt(0x0077E055 + 1, 2147483646); // 物攻PAD 相关具体不明，默认值1999，int 4字节
	Memory::WriteInt(0x0077E12F + 1, 2147483646); // 技能 相关具体不明，默认值1999，int 4字节
	Memory::WriteInt(0x008C3304 + 1, setDamageCap); // 物攻面板，默认值199999，int 4字节
	Memory::WriteInt(0x0077E215 + 1, setMAtkCap); // 魔攻面板，int 4字节
	Memory::WriteInt(0x00780620 + 1, setMAtkCap); // 魔攻面板，int 4字节
	Memory::WriteInt(0x007806D0 + 1, setAccCap); // 命中，默认999
	Memory::WriteInt(0x00780702 + 1, setAvdCap); // 回避，默认999
	Memory::WriteInt(0x0078FF5F + 1, 2147483646); // 计算物理伤害相关，意义不明，默认1999，int 4字节
	Memory::WriteInt(0x0079166C + 1, 2147483646); // 计算魔攻MDamage的，默认值1999，int 4字节，注意：这里不改的话，打怪输出计算的魔法伤害就是按1999计算的
	Memory::WriteInt(0x00791CD5 + 1, 2147483646); // 计算魔攻MDamage的，默认值1999，int 4字节，注意：这里不改似乎也不影响输出计算
	Memory::WriteInt(0x0078E061 + 1, 2147483646); //CalcDamage::PDamage 999，意义不明，int 4字节
	Memory::WriteInt(0x0078E67D + 1, 2147483646); //CalcDamage::PDamage 999，意义不明，int 4字节
	Memory::WriteInt(0x007918FC + 1, 2147483646); //CalcDamage::MDamage 999，意义不明，int 4字节

	Memory::WriteDouble(0x00AFE8A0, setAtkOutCap);	// 输出显示上限，默认199999，double 8字节


	Memory::WriteInt(0x00780743 + 3, speedMovementCap); //set speed cap //ty ronan
	Memory::WriteInt(0x008C4286 + 1, speedMovementCap); //set speed cap //ty ronan
	Memory::WriteInt(0x0094D91E + 1, speedMovementCap); //set speed cap //ty ronan
}

void Client::UpdateResolution() {
	nStatusBarY = Client::m_nGameHeight - 578;

	Memory::CodeCave(AdjustStatusBar, dwStatusBarVPos, 5);
	Memory::CodeCave(AdjustStatusBarBG, dwStatusBarBackgroundVPos, 5);
	Memory::CodeCave(AdjustStatusBarInput, dwStatusBarInputVPos, 9);

	Memory::WriteInt(dwApplicationHeight + 1, m_nGameHeight);//push 600
	Memory::WriteInt(dwApplicationWidth + 1, m_nGameWidth);	//push 800 ; CWvsApp::InitializeGr2D
	Memory::WriteInt(dwCursorVectorVPos + 2, (unsigned int)floor(-m_nGameHeight / 2));//push -300				!!moves all interactable UI elements!!
	Memory::WriteInt(dwCursorVectorHPos + 2, (unsigned int)floor(-m_nGameWidth / 2));	//push -400 ; CInputSystem::SetCursorVectorPos				!!moves all interactable UI elements!!
	Memory::WriteInt(dwUpdateMouseLimitVPos + 1, m_nGameHeight);//mov ecx,600
	Memory::WriteInt(dwUpdateMouseLimitHPos + 1, m_nGameWidth);	//mov ecx,800 ; CInputSystem::UpdateMouse
	Memory::WriteInt(dwCursorPosLimitVPos + 1, m_nGameHeight);//mov eax,600
	Memory::WriteInt(dwCursorPosLimitHPos + 1, m_nGameWidth);	//mov eax,800 ; CInputSystem::SetCursorPos
	Memory::WriteInt(dwViewPortHeight + 3, m_nGameHeight);//lea eax,[esi+eax-600]
	Memory::WriteInt(dwViewPortWidth + 3, m_nGameWidth);	//lea eax,[ecx+eax-800]

	Memory::WriteInt(dwToolTipLimitVPos + 1, m_nGameHeight - 1); //mov eax,599 ; CUIToolTip::MakeLayer
	Memory::WriteInt(dwToolTipLimitHPos + 1, m_nGameWidth - 1); //mov eax,799 ; CUIToolTip::MakeLayer

	Memory::WriteInt(dwTempStatToolTipDraw + 3, -m_nGameWidth + 6); //lea eax,[eax+ecx-797] ; CTemporaryStatView::ShowToolTip
	Memory::WriteInt(dwTempStatToolTipFind + 3, -m_nGameWidth + 6); //lea eax,[eax+ecx-797] ; CTemporaryStatView::FindIcon
	Memory::WriteInt(dwTempStatIconVPos + 2, (m_nGameHeight / 2) - 23);	//sub ebx,277 ; Skill icon buff y-pos
	Memory::WriteInt(dwTempStatIconHpos + 3, (m_nGameWidth / 2) - 3);	//lea eax,[eax+esi+397] ; Skill icon buff x-pos
	Memory::WriteInt(dwTempStatCoolTimeVPos + 2, (m_nGameHeight / 2) - 23);	//sub ebx,277 ; Skill icon cooltime y-pos
	Memory::WriteInt(dwTempStatCoolTimeHPos + 3, (m_nGameWidth / 2) - 3);	//lea eax,[eax+esi+397] ; Skill icon cooltime x-pos

	Memory::WriteInt(dwQuickSlotInitVPos + 1, m_nGameHeight + 1);//add eax,533
	Memory::WriteInt(dwQuickSlotInitHPos + 1, 815); //push 647 //hd800
	Memory::WriteInt(dwQuickSlotVPos + 2, m_nGameHeight + 1);//add esi,533
	Memory::WriteInt(dwQuickSlotHPos + 1, 815); //push 647 //hd800
	Memory::WriteInt(dwQuickSlotCWndVPos + 2, (600 - m_nGameHeight) / 2 - 427 - 20); //lea edi,[eax-427]
	Memory::WriteInt(dwQuickSlotCWndHPos + 2, -815); //lea ebx,[eax-647]

	//Memory::WriteInt(dwByteAvatarMegaHPos + 1, m_nGameWidth + 100); //push 800 ; CAvatarMegaphone::ByeAvatarMegaphone ; IWzVector2D::RelMove ##BAK
	Memory::WriteInt(dwByteAvatarMegaHPos + 1, m_nGameWidth); //push 800 ; CAvatarMegaphone::ByeAvatarMegaphone ; IWzVector2D::RelMove
	Memory::WriteInt(dwAvatarMegaWidth + 1, m_nGameWidth); //push 800 ; CAvatarMegaphone ; CreateWnd

	Memory::WriteInt(0x0043717B + 1, m_nGameHeight);//mov edi,600
	Memory::WriteInt(0x00437181 + 1, m_nGameWidth);	//mov esi,800 ; CreateWnd
	Memory::WriteInt(0x0053808B + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x00538091 + 1, m_nGameWidth);	//push 800 ; RelMove?
	Memory::WriteInt(0x004CC160 + 1, m_nGameWidth);	//mov [ebp-16],800 ; CreateWnd
	Memory::WriteInt(0x004CC2C5 + 2, m_nGameHeight);//cmp ecx,600
	Memory::WriteInt(0x004CC2B0 + 1, m_nGameWidth);	//mov eax,800 ; CreateWnd
	Memory::WriteInt(0x004D59B2 + 1, m_nGameHeight);//mov eax,800
	Memory::WriteInt(0x004D599D + 1, m_nGameWidth);	//mov eax,800 ; CreateWnd
	Memory::WriteInt(0x0085F36C + 2, m_nGameWidth);	//cmp edx,800
	Memory::WriteInt(0x0085F374 + 1, m_nGameWidth - 80);	//mov ecx,720 ; CreateDlg
	Memory::WriteInt(0x008EBC58 + 1, m_nGameHeight);//mov eax,600
	Memory::WriteInt(0x008EBC3C + 1, m_nGameWidth);	//mov eax,800 ; RelMove?
	Memory::WriteInt(0x009966B5 + 1, m_nGameHeight);//mov ecx,600
	Memory::WriteInt(0x009966CA + 2, m_nGameWidth);	//cmp edi,800
	Memory::WriteInt(0x009966D2 + 1, m_nGameWidth - 100);	//mov edx,700 ; CreateDlg
	Memory::WriteInt(0x009A3E7F + 1, m_nGameHeight);//mov edx,600
	Memory::WriteInt(0x009A3E72 + 1, m_nGameWidth);	//mov edx,800 ; CreateDlg
	//Memory::WriteInt(0x0045B898 + 1, m_nGameHeight - 25);	//push 575
	Memory::WriteInt(0x0045B898 + 1, m_nGameWidth - 225);	//push 575 ##ED  //smega x axis fade
	//Memory::WriteInt(0x0045B97E + 1, m_nGameWidth);	//push 800 ; RelMove? ##REDUN
	//Memory::WriteInt(0x004D9BD1 + 1, m_nGameWidth);	//push 800	; StringPool#1443 (BtMouseCilck)		//click ???related?? for tabs and numbers in cash shop
	//Memory::WriteInt(0x004D9C37 + 1, m_nGameWidth);	//push 800	; StringPool#1443 (BtMouseCilck)		//click ???related?? for tabs and numbers in cash shop
	//Memory::WriteInt(0x004D9C84 + 1, m_nGameWidth);	//push 800 ; StringPool#1443 (BtMouseCilck)		//click ???related?? for tabs and numbers in cash shop
	Memory::WriteInt(0x005386F0 + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x005386F5 + 1, m_nGameWidth);	//push 800 ; CField::DrawFearEffect
	Memory::WriteInt(0x0055B808 + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x0055B80D + 1, m_nGameWidth);	//mov edi,800
	Memory::WriteInt(0x0055B884 + 1, m_nGameWidth);	//push 600 ; RelMove?
	Memory::WriteInt(0x007E15BE + 1, m_nGameWidth);	//push 800 ; CreateWnd
	Memory::WriteInt(0x007E16B9 + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x007E16BE + 1, m_nGameWidth);	//push 800 ; CWnd::GetCanvas //!!length of server message at top
	Memory::WriteInt(0x008AA266 + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x008AA26B + 1, m_nGameWidth);	//push 800 ; CreateWnd
	Memory::WriteInt(0x009F6E99 + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x009F6EA0 + 1, m_nGameWidth);	//push 800 ; StringPool#1162 (MapleStoryClass)

	Memory::WriteInt(0x007CF48F + 1, m_nGameHeight);//mov eax,600 ; 
	Memory::WriteInt(0x007CF49D + 1, m_nGameWidth);	//mov eax,800 ; IWzVector2D::RelMove
	Memory::WriteInt(0x008A12F4 + 1, m_nGameHeight);//mov eax,600 ; 
	Memory::WriteInt(0x008A1302 + 1, m_nGameWidth);	//mov eax,800 ; IWzVector2D::RelMove
	Memory::WriteInt(0x007F257E + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x007F258F + 1, m_nGameWidth);	//push 800 ; CWnd::CreateWnd
	Memory::WriteInt(0x0046B85C + 1, m_nGameHeight);//mov eax,600
	Memory::WriteInt(0x0046B86A + 1, m_nGameWidth);	//mov eax,800 ; IWzVector2D::RelMove
	Memory::WriteInt(0x009994D8 + 1, m_nGameHeight);//mov ecx,600
	Memory::WriteInt(0x009994ED + 2, m_nGameWidth);	//cmp edi,800
	Memory::WriteInt(0x009994F5 + 1, m_nGameWidth - 100);	//mov edx,700 ; CreateDlg

	Memory::WriteInt(0x0062FC4A + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x0062FC4F + 1, m_nGameWidth);	//push 800 ; IWzGr2DLayer::Getcanvas
	Memory::WriteInt(0x0062FE63 + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x0062FE68 + 1, m_nGameWidth);	//push 800 ; IWzGr2DLayer::Getcanvas
	Memory::WriteInt(0x0062F9C6 + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x0062F9CB + 1, m_nGameWidth);	//push 800; (UI/Logo/Wizet)
	Memory::WriteInt(0x0062F104 + 1, m_nGameHeight);//mov eax,600
	Memory::WriteInt(0x0062F109 + 1, m_nGameWidth);	//mov eax,800 ; Rectangle
	Memory::WriteInt(0x006406D5 + 1, m_nGameHeight);//mov ecx,600
	Memory::WriteInt(0x006406C3 + 1, m_nGameWidth);	//mov ecx,800
	Memory::WriteInt(0x0064050A + 1, m_nGameHeight);//mov ecx,600
	Memory::WriteInt(0x006404F8 + 1, m_nGameWidth);	//mov ecx,800
	Memory::WriteInt(0x00640618 + 1, m_nGameHeight);//mov ecx,600
	Memory::WriteInt(0x00640690 + 1, m_nGameHeight);//mov ecx,600
	Memory::WriteInt(0x0064061D + 1, m_nGameHeight);//mov ecx,600
	Memory::WriteInt(0x0064064B + 1, m_nGameHeight);//mov ecx,600
	Memory::WriteInt(0x00640606 + 1, m_nGameWidth);	//mov ecx,800
	Memory::WriteInt(0x0064067E + 1, m_nGameWidth);	//mov ecx,800
	Memory::WriteInt(0x00640639 + 1, m_nGameWidth);	//mov ecx,800
	Memory::WriteInt(0x0064043E + 1, (unsigned int)floor(m_nGameWidth / 2));	//mov edi,400
	Memory::WriteInt(0x00640443 + 1, (unsigned int)floor(m_nGameHeight / 2));	//mov esi,300
	Memory::WriteInt(0x00640626 + 1, (unsigned int)floor(m_nGameWidth / 2));	//add eax,400 ; bunch of modulus stuff

	Memory::WriteInt(0x00641038 + 2, m_nGameHeight);//??possibly related to player display
	Memory::WriteInt(0x0064103F + 2, m_nGameWidth);//??possibly related to player display
	Memory::WriteInt(0x00641048 + 1, (unsigned int)floor(-m_nGameHeight / 2));	//mov esi,-300
	Memory::WriteInt(0x00641050 + 1, (unsigned int)floor(-m_nGameWidth / 2));		//mov esi,-400 ;
	Memory::WriteInt(0x00641A19 + 3, m_nGameHeight);//mov [ebp+28],600
	Memory::WriteInt(0x00641A12 + 3, m_nGameWidth);	//mov [ebp+32],800 ; idk
	Memory::WriteInt(0x00641B38 + 3, m_nGameHeight);//mov [ebp-32],600
	Memory::WriteInt(0x00641B2E + 3, m_nGameWidth);	//mov [ebp-36],800 ; CAnimationDisplayer::SetCenterOrigin

	Memory::WriteInt(0x006CD842 + 1, (unsigned int)floor(m_nGameWidth / 2));	//push 400 ; RelMove?

	Memory::WriteInt(0x0059A0A2 + 6, (unsigned int)floor(m_nGameHeight / 2));	//mov [ebx+2364],300
	Memory::WriteInt(0x0059A09C + 2, (unsigned int)floor(m_nGameWidth / 2));	//mov [esi],400	; CInputSystem::LoadCursorState
	Memory::WriteInt(0x0080546C + 1, m_nGameHeight);//mov edi,600
	Memory::WriteInt(0x00805459 + 1, m_nGameWidth);	//mov edx,800 ; CUIEventAlarm::CreateEventAlarm
	Memory::WriteInt(0x008CFD4B + 1, m_nGameHeight - 22);	//push 578
	Memory::WriteInt(0x008CFD50 + 1, m_nGameWidth);	//push 800
	Memory::WriteInt(0x0053836D + 1, (unsigned int)floor(-m_nGameHeight / 2));//push -300
	Memory::WriteInt(0x00538373 + 1, (unsigned int)floor(-m_nGameWidth / 2));	//push -400	; RelMove?
	Memory::WriteInt(0x0055BB2F + 1, (unsigned int)floor(-m_nGameHeight / 2));//push -300
	Memory::WriteInt(0x0055BB35 + 1, (unsigned int)floor(-m_nGameWidth / 2));	//push -400 ; RelMove?

	Memory::WriteInt(0x005A8B46 + 1, m_nGameHeight);//mov eax,600
	Memory::WriteInt(0x005A8B56 + 1, m_nGameWidth);	//mov eax,800 ; RelMove?
	Memory::WriteInt(0x005A9B42 + 1, m_nGameHeight);//mov eax,600
	Memory::WriteInt(0x005A9B52 + 1, m_nGameWidth);	//mov eax,800 ; RelMove?
	Memory::WriteInt(0x005AADAA + 1, m_nGameHeight);//mov eax,600
	Memory::WriteInt(0x005AADBA + 1, m_nGameWidth);	//mov eax,800 ; RelMove?
	Memory::WriteInt(0x005ABC65 + 1, m_nGameHeight);//mov eax,600
	Memory::WriteInt(0x005ABC75 + 1, m_nGameWidth);	//mov eax,800 ; RelMove?
	Memory::WriteInt(0x005ACB29 + 1, m_nGameHeight);//mov eax,600
	Memory::WriteInt(0x005ACB39 + 1, m_nGameWidth);	//mov eax,800 ; RelMove?
	Memory::WriteInt(0x005C187E + 1, m_nGameHeight);//mov eax,600
	Memory::WriteInt(0x005C188E + 1, m_nGameWidth);	//mov eax,800 ; RelMove?
	Memory::WriteInt(0x005C2D62 + 1, m_nGameHeight);//mov eax,600
	Memory::WriteInt(0x005C2D72 + 1, m_nGameWidth);	//mov eax,800 ; RelMove?
	Memory::WriteInt(0x005E3FA0 + 1, m_nGameHeight);//push 600

	Memory::WriteInt(0x005F64DE + 1, (unsigned int)floor(-m_nGameHeight / 2));	//push -300 ;
	Memory::WriteInt(0x005F6627 + 1, (unsigned int)floor(-m_nGameHeight / 2));	//push -300 ;
	Memory::WriteInt(0x005F464D + 1, (unsigned int)floor(m_nGameWidth / 2));//??related to login game frame

	Memory::WriteInt(0x0060411C + 1, m_nGameHeight);//push 600
	//Memory::WriteInt(0x00604126 + 1, floor(-m_nGameWidth / 2));	//push -300 //moves characters side to side on char select //unnecessary atm
	Memory::WriteInt(0x0060F79B + 1, (m_nGameHeight / 2) - 201);//??possibly related to login utildlg
	Memory::WriteInt(0x0060F7A4 + 1, (m_nGameHeight / 2) - 181);//??possibly related to login utildlg
	Memory::WriteInt(0x0060F7AC + 1, (m_nGameWidth / 2) - 201);//??possibly related to login utildlg
	Memory::WriteInt(0x0060F7B5 + 1, (m_nGameWidth / 2) - 181);//??possibly related to login utildlg
	Memory::WriteInt(0x00613093 + 1, (m_nGameHeight / 2) - 200);//??likely related to login pop-up msg
	Memory::WriteInt(0x00613099 + 1, (m_nGameWidth / 2) - 45);//??likely related to login pop-up msg
	Memory::WriteInt(0x0061DAFF + 1, (m_nGameHeight / 2) - 150);//??likely related to login pop-up msg
	Memory::WriteInt(0x0061DB08 + 1, (m_nGameHeight / 2) - 130);//??likely related to login pop-up msg
	Memory::WriteInt(0x0061DB10 + 1, (m_nGameWidth / 2) - 201);//??likely related to login pop-up msg
	Memory::WriteInt(0x0061DB19 + 1, (m_nGameWidth / 2) - 181);//??likely related to login pop-up msg

	Memory::WriteInt(0x004372B1 + 1, (unsigned int)floor(-m_nGameHeight / 2));//push -300
	Memory::WriteInt(0x004372B6 + 1, (unsigned int)floor(-m_nGameWidth / 2));	//push -400 ; RelMove?
	Memory::WriteInt(0x006CE3AB + 1, m_nGameWidth);	//push 800
	Memory::WriteInt(0x007E1CB7 + 1, m_nGameWidth);	//push 800
	Memory::WriteInt(0x008D82F5 + 1, m_nGameHeight - 22);	//push 578
	Memory::WriteInt(0x008D82FA + 1, m_nGameWidth);	//push 800 ; CreateWnd?
	Memory::WriteInt(0x00935870 + 1, (unsigned int)floor(m_nGameHeight / 2));	//push 300
	Memory::WriteInt(0x0093586B + 1, m_nGameWidth);	// push 800 ; RelMove? (Skills)
	Memory::WriteInt(0x009DFD5C + 1, m_nGameWidth);	//mov ecx,800
	Memory::WriteInt(0x009DFED2 + 1, m_nGameHeight);//mov ecx,600	; IWzVector2D::RelMove
	Memory::WriteInt(0x009F6ADD + 1, (unsigned int)floor(m_nGameHeight / 2)); //push 300 ; MapleStoryClass
	Memory::WriteInt(0x006D50D8 + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x0074BAA9 + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x0074B951 + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x0074B4A2 + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x0074B3B7 + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x006421B3 + 1, m_nGameHeight);//push 600 ; CSoundMan::PlayBGM

	Memory::WriteInt(0x0059EB49 + 1, m_nGameHeight);//push 600 ; CSoundMan::PlayBGM
	Memory::WriteInt(0x008D247B + 1, m_nGameHeight - 33);	//push 567 ; IWzVector2D::RelMove
	Memory::WriteInt(0x008DEB93 + 1, m_nGameHeight - 20);	//push 580
	Memory::WriteInt(0x008DEE2F + 1, m_nGameHeight - 20);	//push 580
	Memory::WriteInt(0x008D2765 + 1, m_nGameHeight - 19);	//push 581
	Memory::WriteInt(0x008DA11C + 1, m_nGameHeight - 19);	//push 581 临时经验条
	Memory::WriteInt(0x008D29B4 + 1, m_nGameHeight - 19);	//push 581
	Memory::WriteInt(0x008D8BFE + 1, m_nGameHeight - 19);	//push 581
	Memory::WriteInt(0x008D937E + 1, m_nGameHeight - 19);	//push 581 //008D9373  move mana bar outline? //ty rynyan
	Memory::WriteInt(0x008D9AC9 + 1, m_nGameHeight - 19);	//push  
	Memory::WriteInt(0x008D1D50 + 1, m_nGameHeight - 22);	//push 578
	Memory::WriteInt(0x008D1D55 + 1, m_nGameWidth);	//push 800
	Memory::WriteInt(0x008D1FF4 + 1, m_nGameHeight - 22);	//push 578
	Memory::WriteInt(0x008D1FF9 + 1, m_nGameWidth);	//push 800 ; CUIStatusBar
	Memory::WriteInt(0x0062F5DF + 1, m_nGameHeight);//push 600
	Memory::WriteInt(0x0062F5E4 + 1, m_nGameWidth);	//push 800 ; (UI/Logo/Nexon)
	Memory::WriteInt(0x004EDB89 + 1, m_nGameWidth);	//mov ecx,800
	Memory::WriteInt(0x004EDB78 + 1, m_nGameHeight);//mov ecx,600 ; CreateWnd
	Memory::WriteInt(0x004EDAD8 + 1, m_nGameWidth);	//mov ecx,800
	Memory::WriteInt(0x009F7079, m_nGameHeight);	// dd 600
	Memory::WriteInt(0x009F707E, m_nGameWidth);	// dd 800
	Memory::WriteInt(0x00BE2738, (unsigned int)floor(m_nGameWidth / 2));	// dd 400
	Memory::WriteInt(0x00BE2DF4, (unsigned int)floor(m_nGameHeight / 2));	// dd 300
	Memory::WriteInt(0x00BE2DF0, (unsigned int)floor(m_nGameWidth / 2));	// dd 400
	Memory::WriteInt(0x00640656 + 2, (unsigned int)floor(-m_nGameWidth / 2));		//add edi,-400 ;

	Memory::WriteInt(0x006CE4C6 + 1, (unsigned int)floor(-m_nGameWidth / 2));		//push -400 ;
	Memory::WriteInt(0x009E2E85 + 1, (unsigned int)floor(-m_nGameHeight / 2));	//push -300		overall screen visible UI scaling
	Memory::WriteInt(0x009E2E8B + 1, (unsigned int)floor(-m_nGameWidth / 2));		//push -400 ;	overall screen visible UI scaling

	Memory::WriteInt(0x0093519A + 1, (unsigned int)floor(-m_nGameHeight / 2));	//push -300 ;
	Memory::WriteInt(0x00954433 + 1, (unsigned int)floor(-m_nGameHeight / 2));	//push -300 ;
	Memory::WriteInt(0x00981555 + 1, (unsigned int)floor(-m_nGameHeight / 2));	//push -300 ;
	Memory::WriteInt(0x00981F7A + 2, (unsigned int)floor(-m_nGameHeight / 2));	//push -300 ;

	Memory::WriteInt(0x0066BACE + 2, (unsigned int)floor(-m_nGameWidth / 2));		//and ecx,-400
	Memory::WriteInt(0x009B76BD + 3, (unsigned int)floor(-m_nGameHeight / 2));	//push -300
	Memory::WriteInt(0x009B76CB + 3, (unsigned int)floor(m_nGameHeight / 2));		//push 300

	Memory::WriteInt(0x009F7078 + 1, m_nGameHeight);//??related to application dimensions	//(ragezone release merge)//thanks mr mr of ragezone for these addresses
	Memory::WriteInt(0x009F707D + 1, m_nGameWidth);//??related to application dimensions

	Memory::WriteInt(0x0058C8A6 + 1, m_nGameWidth);//??

	Memory::WriteInt(0x004EDABF + 1, m_nGameHeight);//??

	Memory::WriteInt(0x00991854 + 1, m_nGameHeight);//??unknown cwnd function
	Memory::WriteInt(0x0099185F + 1, (m_nGameWidth / 2) - 134);//??unknown cwnd function
	Memory::WriteInt(0x00991867 + 1, (m_nGameWidth / 2) - 133);//??unknown cwnd function
	Memory::WriteInt(0x00992BA7 + 1, (unsigned int)floor(m_nGameWidth / 2));//??unknown cwnd function, possibly related to cutildlg
	Memory::WriteInt(0x00992BAC + 1, (unsigned int)floor(m_nGameHeight / 2));//??unknown cwnd function, possibly related to cutildlg

	Memory::WriteInt(0x007E1E07 + 2, m_nGameWidth);//??related to displaying server message at top of screen
	Memory::WriteInt(0x007E19CA + 2, m_nGameWidth);//??related to displaying server message at top of screen

	Memory::WriteInt(0x005362B2 + 1, (m_nGameWidth / 2) - 129);//??related to boss bar
	Memory::WriteInt(0x005364AA + 2, (m_nGameWidth / 2) - 128);//??related to boss bar

	Memory::WriteInt(0x00592A08 + 1, (m_nGameWidth / 2) - 125);//??likely related to mouse pos

	Memory::WriteInt(0x00621226 + 1, (m_nGameWidth / 2) - 216);//??possibly related to logo
	Memory::WriteByte(0x0062121E + 1, 0x01);//??possibly related to logo

	Memory::WriteInt(0x008C069F + 1, (m_nGameHeight / 2) - 14);//??related to status bar
	Memory::WriteInt(0x008C06A4 + 1, (m_nGameWidth / 2) - 158);//???related to status bar

	Memory::WriteInt(0x00A24D0B + 1, (m_nGameWidth / 2) - 129);//??

	Memory::WriteInt(0x00BE273C, 128);//??
	Memory::WriteByte(0x00A5FC2B, 0x05);//??
	//Memory::WriteByte(0x008D1790 + 2, 0x01); //related to quickslots area presence		 originally 1U but changed because unsigned int crashes it after char select
	Memory::WriteByte(0x0089B636 + 2, 0x01); //related to exp gain/item pick up msg, seems to affect msg height ! originally 1U but changed because unsigned int crashes it after char select
	Memory::WriteByte(0x00592A06 + 1, 0x01);//???likely related to mouse pos

	Memory::WriteInt(0x00744EB4 + 1, m_nGameWidth);//??related to in-game taking screenshot functionality
	Memory::WriteInt(0x00744EB9 + 1, m_nGameHeight);//??related to in-game taking screenshot functionality
	Memory::WriteInt(0x00744E2A + 1, 3 * m_nGameWidth * m_nGameHeight);//??related to in-game taking screenshot functionality
	Memory::WriteInt(0x00744E43 + 1, m_nGameWidth * m_nGameHeight);//??related to in-game taking screenshot functionality
	Memory::WriteInt(0x00744DA6 + 1, 4 * m_nGameWidth * m_nGameHeight);//??related to in-game taking screenshot functionality

	Memory::WriteInt(0x00897BB4 + 1, (m_nGameWidth / 2) - 143);//??related to exp gain/item pick up msg

	if (WindowedMode) {
		unsigned char forced_window[] = { 0xb8, 0x00, 0x00, 0x00, 0x00 }; //force window mode	//thanks stelmo for showing me how to do this
		Memory::WriteByteArray(0x009F7A9B, forced_window, sizeof(forced_window));//force window mode
	}
	if (RemoveLogos) {
		Memory::FillBytes(0x0062EE54, 0x90, 21);	//no Logo @launch //Thanks Denki!!
	}

	int msgAmntOffset, msgAmnt; msgAmnt = MsgAmount; msgAmntOffset = msgAmnt * 14;

	Memory::WriteInt(0x0089B639 + 1, m_nGameHeight - 6 - msgAmntOffset - 80);//inventory/exp gain y axis //####hd100 //90
	Memory::WriteInt(0x0089B6F7 + 1, m_nGameWidth - 405);//inventory/exp gain x axis //310 //####hd415 //405

	Memory::WriteInt(0x0089AF33 + 1, 400);//length of pick up and exp gain message canvas //found with help from Davi
	Memory::WriteInt(0x0089B2C6 + 1, 400);//address to move the message in the canvas adjusted above to the center of the new canvas  //thanks chris

	Memory::WriteInt(0x0089AEE2 + 3, msgAmnt);//moregainmsgs part 1
	MoreGainMsgsOffset = msgAmnt;	//param for ccmoregainmssgs
	Memory::CodeCave(ccMoreGainMsgs, dwMoreGainMsgs, MoreGainMsgsNOPs); //moregainmsgs part 2
	MoreGainMsgsFadeOffset = 15000;	//param for ccmoregainmssgsFade
	Memory::CodeCave(ccMoreGainMsgsFade, dwMoreGainMsgsFade, MoreGainMsgsFadeNOPs); //moregainmsgsFade
	MoreGainMsgsFade1Offset = 255 * 4 / 3;	//param for ccmoregainmssgsFade
	Memory::CodeCave(ccMoreGainMsgsFade1, dwMoreGainMsgsFade1, MoreGainMsgsFade1NOPs); //moregainmsgsFade1

	Memory::WriteInt(0x0045B337 + 1, m_nGameWidth);//related to smega display  //likely screen area where pop up starts for smega
	Memory::WriteInt(0x0045B417 + 1, m_nGameWidth - 225);//smega with avatar x axis for duration on screen

	Memory::WriteInt(0x007C2531 + 1, m_nGameHeight - 80);//??

	//Memory::WriteInt(0x0089B796 + 2, m_nGameHeight - 18);//???related to exp gain/item pick up msg
	//Memory::WriteInt(0x0089BA03 + 1, m_nGameHeight - 96); //??related to exp gain/item pick up msg
	//Memory::WriteInt(0x008D3F73 + 1, m_nGameHeight - 93);//bottom frame, white area
	//Memory::WriteInt(0x008D3FE5 + 1, m_nGameHeight - 93);//bottom frame, grey area
	//Memory::WriteInt(0x008D8353 + 1, m_nGameHeight - 46); //bottom frame, character level
	//Memory::WriteInt(0x008D83D1 + 1, m_nGameHeight - 55); //role
	//Memory::WriteInt(0x008D8470 + 1, m_nGameHeight - 40); //name of character

	//Memory::WriteInt(0x008DE850 + 1, 580);//quickslotcheckX//interactivity of bottom buttoms
	//Memory::WriteInt(0x008DE896 + 1, 647);//quickslotcheckX//interactivity of bottom buttoms
	//Memory::WriteInt(0x008DE82B + 1, 507);///quickslotcheckY //interactivity of bottom buttoms

	//Memory::WriteInt(0x008DA11C + 1, m_nGameHeight - 19);//??likely various status bar UI components
	//Memory::WriteInt(0x008DA3D4 + 1, m_nGameHeight - 56); //exphpmp % labels
	//Memory::WriteInt(0x008DA463 + 1, m_nGameHeight - 51); //stat bar gradient or bracket
	//Memory::WriteInt(0x008DA4F2 + 1, m_nGameHeight - 51);//stat bar gradient or bracket
	//Memory::WriteInt(0x008DA61B + 1, m_nGameHeight - 56);//??likely various status bar UI components

	//Memory::WriteInt(0x008DA90F + 1, m_nGameHeight - 51);//brackets for stat numbers
	//Memory::WriteInt(0x008DA9C6 + 1, m_nGameHeight - 51);
	//Memory::WriteInt(0x008DAC3F + 1, m_nGameHeight - 51);
	//Memory::WriteInt(0x008DACF1 + 1, m_nGameHeight - 51);
	//Memory::WriteInt(0x008DAF64 + 1, m_nGameHeight - 51);

	//Memory::WriteInt(0x008DFA6F + 1, m_nGameHeight - 81);//chat box selection, dragging box size, minus plus sign, typing interac
	//Memory::WriteInt(0x008DFB01 + 1, m_nGameHeight - 81);
	//Memory::WriteInt(0x008DFBA5 + 1, m_nGameHeight - 80);
	//Memory::WriteInt(0x008DFC10 + 1, m_nGameHeight - 85);

	//Memory::WriteInt(0x008D4AFB + 1, m_nGameHeight - 91); //is for the little grab/resize bar on it (I think)??
	//Memory::WriteInt(0x008D4C1F + 1, m_nGameHeight - 90);//??likely various status bar UI components
	//Memory::WriteInt(0x008D4CDD + 1, m_nGameHeight - 20);//??likely various status bar UI components
	//Memory::WriteInt(0x008D4BBC + 6, m_nGameHeight - 114);//??likely various status bar UI components
	//Memory::WriteInt(0x008D4C47 + 1, m_nGameHeight - 87);//minimized chat box frame
	//Memory::WriteInt(0x008D628B + 1, m_nGameHeight - 91); //is for the background for the text area.??
	//Memory::WriteInt(0x008D6300 + 1, m_nGameHeight - 90); //is for the scroll bar on the chat text area.??
	//Memory::WriteInt(0x008D4B6D + 1, m_nGameHeight - 90);//scroll bar of chat
	//Memory::WriteInt(0x008D276A + 1, m_nGameHeight - 19);//??likely various status bar UI components

	//Memory::WriteInt(0x008D7778 + 3, m_nGameHeight - 42);//???likely various status bar UI components
	//Memory::WriteInt(0x008D7785 + 3, m_nGameHeight - 26);//??likely various status bar UI components
	//Memory::WriteInt(0x008D783A + 3, m_nGameHeight - 41);//??likely various status bar UI components
	//Memory::WriteInt(0x008D7847 + 3, m_nGameHeight - 26);//??likely various status bar UI components

	//Memory::WriteInt(0x008D2FAE + 1, m_nGameHeight - 57); //bottom 4 large buttons
	//Memory::WriteInt(0x008D3056 + 1, m_nGameHeight - 57);
	//Memory::WriteInt(0x008D311F + 1, m_nGameHeight - 57);
	//Memory::WriteInt(0x008D31E7 + 1, m_nGameHeight - 57);//bottom 4 large buttons
	Memory::WriteInt(0x00849E39 + 1, m_nGameHeight - 177); //system menu pop up
	Memory::WriteInt(0x0084A5B7 + 1, m_nGameHeight - 281); //shortcuts pop up	//0x84A5BD -  System Options "X" Position. if needed

	Memory::WriteInt(0x00522C73 + 1, m_nGameHeight - 92 - 10);// ??various requests like party, guild, friend, family, invites that pop up
	Memory::WriteInt(0x00522E65 + 1, m_nGameHeight - 92 - 10); // ??various requests like party, guild, friend, family, invites that pop up
	Memory::WriteInt(0x0052307E + 1, m_nGameHeight - 92 - 10);// various requests like party, guild, friend, family, invites that pop up
	Memory::WriteInt(0x00523359 + 1, m_nGameHeight - 92 - 10);// various requests like party, guild, friend, family, invites that pop up
	Memory::WriteInt(0x00523595 + 1, m_nGameHeight - 92 - 10);// various requests like party, guild, friend, family, invites that pop up //quest complete y axis
	Memory::WriteInt(0x0052378B + 1, m_nGameHeight - 92 - 10);// various requests like party, guild, friend, family, invites that pop up
	Memory::WriteInt(0x0052397D + 1, m_nGameHeight - 92 - 10);// various requests like party, guild, friend, family, invites that pop up
	Memory::WriteInt(0x00523BB1 + 1, m_nGameHeight - 92 - 10);// various requests like party, guild, friend, family, invites that pop up
	Memory::WriteInt(0x00523DA5 + 1, m_nGameHeight - 92 - 10);// various requests like party, guild, friend, family, invites that pop up
	Memory::WriteInt(0x00523FA3 + 1, m_nGameHeight - 92 - 10);// various requests like party, guild, friend, family, invites that pop up
	Memory::WriteInt(0x005243DB + 1, m_nGameHeight - 92 - 10);// various requests like party, guild, friend, family, invites that pop up
	Memory::WriteInt(0x00523154 + 1, m_nGameHeight - 102 - 10);//?? various requests like party, guild, friend, family, invites that pop up

	Memory::WriteInt(0x0052418C + 1, m_nGameHeight - 102 - 10);//party quest available pop-up y axis		my first address find own my own

	Memory::WriteInt(0x00523092 + 1, 423);// 交易申请气泡x坐标
	Memory::WriteInt(0x0052336D + 1, m_nGameWidth - 942 + 26 + 37 + 62);//various requests like party, guild, friend, family, invites that pop up //Party Invite
	Memory::WriteInt(0x00522E79 + 1, m_nGameWidth - 942 + 26 + 37 + 62);//various requests like party, guild, friend, family, invites that pop up //friend request
	Memory::WriteInt(0x00522C87 + 1, m_nGameWidth - 942 + 26 + 37 + 62);//various requests like party, guild, friend, family, invites that pop up	// Guild Invite
	//Memory::WriteInt(0x005235A9 + 1, m_nGameWidth - 942);//various requests like party, guild, friend, family, invites that pop up	// Quest Complete, currently unneeded as working without it
	Memory::WriteInt(0x0052379F + 1, m_nGameWidth - 942 + 26 + 37 + 62);//various requests like party, guild, friend, family, invites that pop up//??
	Memory::WriteInt(0x00523991 + 1, m_nGameWidth - 942 + 26 + 37 + 62);//various requests like party, guild, friend, family, invites that pop up/??
	Memory::WriteInt(0x00523BC5 + 1, m_nGameWidth - 942 + 26 + 37 + 62);//various requests like party, guild, friend, family, invites that pop up/??
	Memory::WriteInt(0x00523DC5 + 1, m_nGameWidth - 942 + 26 + 37 + 62);//various requests like party, guild, friend, family, invites that pop up// ??
	Memory::WriteInt(0x00523FB7 + 1, m_nGameWidth - 942 + 26 + 37 + 62);//various requests like party, guild, friend, family, invites that pop up// ??
	Memory::WriteInt(0x005243EF + 1, m_nGameWidth - 942 + 26 + 37 + 62);//various requests like party, guild, friend, family, invites that pop up//??

	//Memory::WriteInt(0x008D326E + 1, m_nGameHeight - 85); //smol buttoms right of chat box (all - 85 ones)
	//Memory::WriteInt(0x008D32F5 + 1, m_nGameHeight - 85);
	//Memory::WriteInt(0x008D337C + 1, m_nGameHeight - 85);
	//Memory::WriteInt(0x008D3403 + 1, m_nGameHeight - 85);
	//Memory::WriteInt(0x008D348A + 1, m_nGameHeight - 85);
	//Memory::WriteInt(0x008D3586 + 1, m_nGameHeight - 85);
	//Memory::WriteInt(0x008D3696 + 1, m_nGameHeight - 85);
	//Memory::WriteInt(0x008D4058 + 1, m_nGameHeight - 85);
	//Memory::WriteInt(0x008DF903 + 1, m_nGameHeight - 85);
	//Memory::WriteInt(0x008DFFCF + 1, m_nGameHeight - 85);
	//Memory::WriteInt(0x008D40CE + 1, m_nGameHeight - 81);//smol buttoms right of chat box (all - 85 ones)

	//Memory::CodeCave(PositionBossBarY2, 0x007E169B, 6);//boss bar, check for server msg, looking in wrong address...
	//if (serverMessageExists != 0) 
	//{
	//	Memory::CodeCave(PositionBossBarY, dwBossBar, 7);//boss bar normal position without server msg
	//}
	//else {
	//	Memory::CodeCave(PositionBossBarY1, dwBossBar, 7);//boss bar with server msg
	//}

	Memory::WriteByte(0x00533B03, 0xb8);	//boss bar extend to window
	Memory::WriteInt(0x00533B03 + 1, m_nGameWidth - 15);	//boss bar	extend to window
	Memory::WriteByte(0x00534370, 0xb9);	//boss bar	extend to window
	Memory::WriteInt(0x00534370 + 1, m_nGameWidth - 22);	//boss bar	extend to window

	//myHeight = -(Client::m_nGameHeight - 600) / 2;//cash shop fix for frame area	//recalc offsets
	//myWidth = -(Client::m_nGameWidth - 800) / 2;//cash shop fix for frame area		//recalc offsets
	//Memory::CodeCave(CashShopFix, dwCashFix, 6);//cash shop fix for frame area //moves frame to top left (not used rn)

	myHeight = (Client::m_nGameHeight - 600) / 2;//cash shop fix for frame area	//recalc offsets
	myWidth = (Client::m_nGameWidth - 800) / 2;//cash shop fix for frame area		//recalc offsets
	
	// 现金商城居中
	nHeightOfsetted1 = 316; nWidthOfsetted1 = 256; nTopOfsetted1 = 0 + myHeight; nLeftOfsetted1 = 0 + myWidth; //parameters for fix1
	Memory::CodeCave(CashShopFix1, dwCashFix1, dwCashFix1NOPs);
	nHeightOfsetted2 = 104; nWidthOfsetted2 = 256; nTopOfsetted2 = 318 + myHeight; nLeftOfsetted2 = -1 + myWidth; //parameters for fix2
	Memory::CodeCave(CashShopFix2, dwCashFix2, dwCashFix2NOPs);
	nHeightOfsetted3 = 163; nWidthOfsetted3 = 246; nTopOfsetted3 = 426 + myHeight; nLeftOfsetted3 = 0 + myWidth; //parameters for fix3
	Memory::CodeCave(CashShopFix3, dwCashFix3, dwCashFix3NOPs);
	nHeightOfsetted4 = 78; nWidthOfsetted4 = 508; nTopOfsetted4 = 17 + myHeight; nLeftOfsetted4 = 272 + myWidth; //parameters for fix4
	Memory::CodeCave(CashShopFix4, dwCashFix4, dwCashFix4NOPs);
	nHeightOfsetted5 = 430; nWidthOfsetted5 = 412; nTopOfsetted5 = 95 + myHeight; nLeftOfsetted5 = 275 + myWidth; //parameters for fix5
	Memory::CodeCave(CashShopFix5, dwCashFix5, dwCashFix5NOPs);	//main part of shop, item listings	//thanks angel for stuff that helped
	nHeightOfsetted6 = 358; nWidthOfsetted6 = 90; nTopOfsetted6 = 157 + myHeight; //parameters for fix6
	Memory::CodeCave(CashShopFix6, dwCashFix6, dwCashFix6NOPs);//code cave 6 //best sellers
	Memory::WriteInt(0x004694BA + 1, myWidth + 690);//nleft, actual drawn part	//best sellers
	nHeightOfsetted7 = 56; nWidthOfsetted7 = 545; nTopOfsetted7 = 530 + myHeight; nLeftOfsetted7 = 254 + myWidth; //parameters for fix7
	Memory::CodeCave(CashShopFix7, dwCashFix7, dwCashFix7NOPs);
	nHeightOfsetted8 = 22; nWidthOfsetted8 = 89; nTopOfsetted8 = 97 + myHeight; nLeftOfsetted8 = 690 + myWidth; //parameters for fix8
	Memory::CodeCave(CashShopFix8, dwCashFix8, dwCashFix8NOPs);
	Memory::CodeCave(CashShopFixOnOff, dwCashFixOnOff, dwCashFixOnOffNOPs);	//fix for preview On/Off button not being accurate on entering cash shop //thanks windyboy

	nHeightOfsettedPrev = 165 + myHeight; nWidthOfsettedPrev = 212 + myWidth; nTopOfsettedPrev = 40 + myHeight; nLeftOfsettedPrev = 24 + myWidth; //parameters for fix cash preview
	Memory::CodeCave(CashShopFixPrev, dwCashFixPrev, dwCashFixPrevNOPs); //cash shop preview fix

	// 交易中心居中
	iHeightOfsetted1 = 200; iWidthOfsetted1 = 256; iTopOfsetted1 = 0 + myHeight; iLeftOfsetted1 = 0 + myWidth;
	Memory::CodeCave(ITCFix1, 0x0059E9E1, 12);
	iHeightOfsetted2 = 110; iWidthOfsetted2 = 256; iTopOfsetted2 = 200 + myHeight; iLeftOfsetted2 = -1 + myWidth;
	Memory::CodeCave(ITCFix2, 0x0059E9F9, 13);
	iHeightOfsetted3 = 108; iWidthOfsetted3 = 256; iTopOfsetted3 = 310 + myHeight; iLeftOfsetted3 = 0 + myWidth;
	Memory::CodeCave(ITCFix3, 0x0059EA15, 13);
	iHeightOfsetted4 = 180; iWidthOfsetted4 = 256; iTopOfsetted4 = 418 + myHeight; iLeftOfsetted4 = 0 + myWidth;
	Memory::CodeCave(ITCFix4, 0x0059EA31, 16);
	iHeightOfsetted5 = 78; iWidthOfsetted5 = 509; iTopOfsetted5 = 17 + myHeight; iLeftOfsetted5 = 272 + myWidth;
	Memory::CodeCave(ITCFix5, 0x0059EA4F, 16);	//main part of shop, item listings	//thanks angel for stuff that helped
	iHeightOfsetted6 = 48; iWidthOfsetted6 = 509; iTopOfsetted6 = 98 + myHeight; iLeftOfsetted6 = 273 + myWidth;
	Memory::CodeCave(ITCFix6, 0x0059EA6E, 14);//code cave 6 //best sellers
	iHeightOfsetted7 = 365; iWidthOfsetted7 = 509; iTopOfsetted7 = 145 + myHeight; iLeftOfsetted7 = 273 + myWidth;
	Memory::CodeCave(ITCFix7, 0x0059EA8B, 20);
	iHeightOfsetted8 = 56; iWidthOfsetted8 = 545; iTopOfsetted8 = 531 + myHeight; iLeftOfsetted8 = 255 + myWidth;
	Memory::CodeCave(ITCFix8, 0x0059EAAE, 17);

	Memory::WriteInt(0x00641F61 + 1, (unsigned int)floor(m_nGameWidth / 2));	//mov ebc,400 ;  VRleft		//camera movement
	Memory::WriteInt(0x00641FC8 + 1, (unsigned int)floor(m_nGameHeight / 2));	//add eax,300  ; VRTop //camera movement //not working for most maps
	//Memory::WriteInt(0x0064202F + 2, (unsigned int)floor(m_nGameWidth / 2));	//mov ebc,400 ;  VRright		//camera movement	//crashes
	Memory::WriteInt(0x0064208F + 1, (unsigned int)floor(m_nGameHeight / 2));	//add eax,300  ; VRbottom //camera movement //not working for most maps

	myAlwaysViewRestoreFixOffset = myHeight; //parameters for fix view restore all maps number ?????working????!!!
	Memory::CodeCave(AlwaysViewRestoreFix, dwAlwaysViewRestoreFix, dwAlwaysViewRestoreFixNOPs);	//fix view restora on all maps, currently does nothing; i likely looked in the wrong area

	if (CustomLoginFrame) {
		Memory::WriteInt(0x005F481E + 1, (unsigned int)floor(-m_nGameHeight / 2));//push -300				!!game login frame!! turn this on if you edit UI.wz and use a frame that matches your res
		Memory::WriteInt(0x005F4824 + 1, (unsigned int)floor(-m_nGameWidth / 2));	//push -400 ; RelMove?				!!game login frame!! turn this on if you edit UI.wz and use a frame that matches your res
	}
	//nHeightOfsettedloginFrameFix = 0 + myHeight; nWidthOfsettedloginFrameFix = 0 + myWidth;
	//nTopOfsettedloginFrameFix = 0 + myHeight; nLeftOfsettedloginFrameFix = 0 + myWidth; //parameters for fix cash preview
	//Memory::CodeCave(loginFrameFix, dwloginFrameFix, loginFrameFixNOPs); //failed login frame fix =(

	if (bigLoginFrame) {
		Memory::WriteInt(0x005F464D + 1, m_nGameWidth - 165);	//mov eax,800 ; RelMove?	//game version number for login frames that hug the side of the screen //you will still need to offset ntop, and that may require a code cave if your height resolution is too big
	}
	else {
		nTopOfsettedVerFix = 10 + myHeight; nLeftOfsettedVerFix = 645 + myWidth; //parameters for fix version number
		Memory::CodeCave(VersionNumberFix, dwVersionNumberFix, dwVersionNumberFixNOPs);	//game version number fix //use this if you use no frame or default client frame
	}

	if (!bigLoginFrame) {
		nHeightOfsettedLoginBackCanvasFix = 352 + myHeight; nWidthOfsettedLoginBackCanvasFix = 125 + myWidth;//para for world select buttonsViewRec
		nTopOfsettedLoginBackCanvasFix = 125 + myHeight; nLeftOfsettedLoginBackCanvasFix = 0 + myWidth;
		Memory::CodeCave(ccLoginBackCanvasFix, dwLoginBackCanvasFix, LoginBackCanvasFixNOPs);	//world select buttons fix		//thank you teto for pointing out my error in finding the constructor

		//yOffsetOfLoginBackBtnFix = 300 + myHeight; xOffsetOfLoginBackBtnFix = 0 + myWidth;	//para for back button
		//Memory::CodeCave(ccLoginBackBtnFix, dwLoginBackBtnFix, LoginBackBtnFixNOPs); //back button on world select //unnecessary as buttons move with canvas

		nHeightOfsettedLoginViewRecFix = 167 + myHeight; nWidthOfsettedLoginViewRecFix = 540 + myWidth;//para for ViewRec fix
		nTopOfsettedLoginViewRecFix = 51 + myHeight; nLeftOfsettedLoginViewRecFix = 136 + myWidth;
		Memory::CodeCave(ccLoginViewRecFix, dwLoginViewRecFix, LoginViewRecFixNOPs);	//world ViewRec fix	

		a1x = 0 + myWidth; a2x = -149 + myWidth; a2y = 0 + myHeight; a3 = 25; a1y = -250; //a4 = 0;	//LoginDescriptor params
		Memory::WriteInt(0x0060D849 + 1, 300 + a1y); //speed 1	//temporary fix by increasing the speed of display until i get good enough at procedural programming 
		//and memory management and reverse engineering to use nexon's own functions to put a black layer with greater z value to cover the tabs being shown off screen at origin
		Memory::CodeCave(ccLoginDescriptorFix, dwLoginDescriptorFix, LoginDescriptorFixNOPs);	//world LoginDescriptor fix	
	}

	int customEngY = -62, customEngX = -22, dojangYoffset = 0;	//myHeight //-55-35 (myHeight*250/100)	-(myWidth*53/100) 140 -130
	yOffsetOfMuruengraidPlayer = 50 + dojangYoffset; xOffsetOfMuruengraidPlayer = 169 + myWidth; //params
	Memory::CodeCave(ccMuruengraidPlayer, dwMuruengraidPlayer, MuruengraidPlayerNOPs);	//muruengraid scaling	
	yOffsetOfMuruengraidClock = 26 + dojangYoffset; xOffsetOfMuruengraidClock = 400 + myWidth; //params
	Memory::CodeCave(ccMuruengraidClock, dwMuruengraidClock, MuruengraidClockNOPs);	//muruengraid scaling
	yOffsetOfMuruengraidMonster = 50 + dojangYoffset; xOffsetOfMuruengraidMonster = 631 + myWidth; //params
	Memory::CodeCave(ccMuruengraidMonster, dwMuruengraidMonster, MuruengraidMonsterNOPs);	//muruengraid scaling
	yOffsetOfMuruengraidMonster1 = 32 + dojangYoffset; xOffsetOfMuruengraidMonster1 = 317 + myWidth; //params
	Memory::CodeCave(ccMuruengraidMonster1, dwMuruengraidMonster1, MuruengraidMonster1NOPs);	//muruengraid scaling	
	yOffsetOfMuruengraidMonster2 = 32 + dojangYoffset; xOffsetOfMuruengraidMonster2 = 482 + myWidth; //params
	Memory::CodeCave(ccMuruengraidMonster2, dwMuruengraidMonster2, MuruengraidMonster2NOPs);	//muruengraid scaling
	yOffsetOfMuruengraidEngBar = 86 + dojangYoffset + customEngY; xOffsetOfMuruengraidEngBar = 17 + myWidth + customEngX; //params
	Memory::CodeCave(ccMuruengraidEngBar, dwMuruengraidEngBar, MuruengraidEngBarNOPs);	//muruengraid scaling	
	yOffsetOfMuruengraidEngBar1 = 130 + dojangYoffset + customEngY; xOffsetOfMuruengraidEngBar1 = 20 + myWidth + customEngX; //params
	Memory::CodeCave(ccMuruengraidEngBar1, dwMuruengraidEngBar1, MuruengraidEngBar1NOPs);	//muruengraid scaling	
	yOffsetOfMuruengraidEngBar2 = 80 + dojangYoffset + customEngY; xOffsetOfMuruengraidEngBar2 = 9 + myWidth + customEngX; //params
	Memory::CodeCave(ccMuruengraidEngBar2, dwMuruengraidEngBar2, MuruengraidEngBar2NOPs);	//muruengraid scaling	
	yOffsetOfMuruengraidClearRoundUI = 260 + myHeight; xOffsetOfMuruengraidClearRoundUI = 400 + myWidth; //params
	Memory::CodeCave(ccMuruengraidClearRoundUI, dwMuruengraidClearRoundUI, MuruengraidClearRoundUINOPs);	//muruengraid scaling
	//yOffsetOfMuruengraidTimerCanvas = 28 + dojangYoffset; xOffsetOfMuruengraidTimerCanvas = 112 + myWidth; //params
	//Memory::CodeCave(ccMuruengraidTimerCanvas, dwMuruengraidTimerCanvas, MuruengraidTimerCanvasNOPs);	//muruengraid scaling	
	//yOffsetOfMuruengraidTimerMinutes = 0 + dojangYoffset; xOffsetOfMuruengraidTimerMinutes = 0 + myWidth; //params	//not needed, bar moves all, kept for referrence or if change are needed
	//Memory::CodeCave(ccMuruengraidTimerMinutes, dwMuruengraidTimerMinutes, MuruengraidTimerMinutesNOPs);	//muruengraid scaling	
	//yOffsetOfMuruengraidTimerSeconds = 0 + dojangYoffset; xOffsetOfMuruengraidTimerSeconds = 68 + myWidth; //params
	//Memory::CodeCave(ccMuruengraidTimerSeconds, dwMuruengraidTimerSeconds, MuruengraidTimerSecondsNOPs);	//muruengraid scaling
	yOffsetOfMuruengraidTimerBar = 16 + dojangYoffset; xOffsetOfMuruengraidTimerBar = 345 + myWidth; //params
	Memory::CodeCave(ccMuruengraidTimerBar, dwMuruengraidTimerBar, MuruengraidTimerBarNOPs);	//muruengraid scaling
	xOffsetOfMuruengraidMonster1_2 = 318 + myWidth; //params	//finally fixed this bugger
	Memory::CodeCave(ccMuruengraidMonster1_2, dwMuruengraidMonster1_2, MuruengraidMonster1_2NOPs);	//muruengraid scaling

	//testingOut("IWzProperty__GetItem _this: 0x%x, result: 0x%x, sPath: %s");//, _this, result, (char*)sPath);

	//int myStatsWindowOffsetVal = 4, myStatsWindowOffset = 176, myStatsWindowOffset1 = 177;
	//Memory::WriteInt(0x008C4AB3 + 1, myStatsWindowOffset); //stat window ty resinate
	//Memory::WriteInt(0x008C510A + 1, myStatsWindowOffset1); //stat window ty resinate
	
	//const char* testString = "RoSWzFile"; Memory::WriteString(0x00B3F434, testString);//testing
	//Memory::WriteInt(0x009F74EA + 3, 16); //testing
	//Memory::WriteInt(0x008C4286 + 1, 400); //testing
	//Memory::WriteInt(0x00780743 + 3, 400); //testing
	//Memory::WriteByte(0x004289C0 + 1, 99); //testing
	//Memory::FillBytes(0x00485C01, 0x90, 2);
	//Memory::FillBytes(0x00485C21, 0x90, 2);

	//Memory::CodeCave(testingCodeCave, dwTesting, TestingNOPs); //testing
	//Memory::CodeCave(testingCodeCave2, dwTesting2, Testing2NOPs); //testing
	//Memory::CodeCave(testingCodeCave3, dwTesting3, Testing3NOPs); //testing
	//Memory::CodeCave(testingCodeCave4, dwTesting4, Testing4NOPs); //testing

	darkCircleX = m_nGameWidth / 2 - 163;
	darkCircleY = m_nGameHeight / 2 - 190;
	Memory::CodeCave(darkMap1cc, 0x0055BEE6, 9);
	Memory::CodeCave(darkMap2cc, 0x0055C07F, 12);
	Memory::CodeCave(darkMap3cc, 0x0055C1C5, 13);
}

void Client::EnableNewIGCipher() {//??not called //no idea what cipher is
	const int nCipherHash = m_nIGCipherHash;
	Memory::WriteInt(dwIGCipherHash + 3, nCipherHash);
	Memory::WriteInt(dwIGCipherVirtual1 + 3, nCipherHash);
	Memory::WriteInt(dwIGCipherVirtual2 + 3, nCipherHash);
	Memory::WriteInt(dwIGCipherDecrypt + 3, nCipherHash);
	Memory::WriteInt(dwIGCipherDecryptStr + 3, nCipherHash);
}

void Client::UpdateLogin() {	//un-used //may still contain some useful addresses for custom login
	Memory::CodeCave(PositionLoginDlg, dwLoginCreateDlg, 14);
	Memory::CodeCave(PositionLoginUsername, dwLoginUsername, 11);
	Memory::CodeCave(PositionLoginPassword, dwLoginPassword, 8);
	Memory::WriteInt(dwLoginInputBackgroundColor + 3, 0xFFF8FAFF); // ARGB value
	Memory::WriteByte(dwLoginInputFontColor + 3, 1); // bool: true=black, false=white
	Memory::WriteInt(dwLoginLoginBtn + 1, -127); // x-pos
	Memory::WriteInt(dwLoginFindPasswordBtn + 1, -127); // x-pos
	Memory::WriteInt(dwLoginQuitBtn + 1, -127); // x-pos
	Memory::WriteInt(dwLoginFindIDBtn + 1, -127); // x-pos
	Memory::WriteByte(dwLoginFindIDBtn + 1, -127); // x-pos
	Memory::WriteByte(dwLoginWebHomeBtn + 1, -127); // x-pos
	Memory::WriteByte(dwLoginWebRegisterBtn + 1, -127); // x-pos
}

void Client::FixMouseWheel() {
	Memory::CodeCave(fixMouseWheelHook, 0x009E8090, 5);
}

void Client::Chinese() {
	if (Client::imeType == 0)
	{
		FixIme::HookOld();
	}
	else {
		FixIme::HookNew();
	}

	FixBuddy::Hook();
	if(SwitchChinese) {
		// 聊天栏选项
		Memory::WriteString(0x00AF2B28, "对联盟     ");

		// 有效期字体大小
		Memory::WriteByte(0x008E55ED + 1, 0x0B);

		// 属性位置字体大小
		Memory::WriteByte(0x008E557A + 1, 0x0B);
		Memory::WriteByte(0x008E565E + 1, 0x0B);

		// 玩家名片 职业字体大小和位置
		Memory::WriteByte(0x0090142E + 1, 0x5E); // 60->5E 位置上移
		Memory::WriteByte(0x00901400 + 1, 1); // 字体type改为1 对应12号大小
	}
}

void Client::LongQuickSlot() {
	// CUIStatusBar::OnCreate
	Memory::WriteByte(0x008D155C + 1, 0xF0); // Draw rest of quickslot bar
	Memory::WriteByte(0x008D155C + 2, 0x03);
	Memory::WriteByte(0x008D182E + 1, 0xF0); // Draw rest of hotkeys
	Memory::WriteByte(0x008D182E + 2, 0x03);
	Memory::WriteByte(0x008D1AC0 + 1, 0xF0); // Draw rest of cooldowns, who tf knows why. TY Rulax
	Memory::WriteByte(0x008D1AC0 + 2, 0x03);

	//----CQuickslotKeyMappedMan::CQuickslotKeyMappedMan?????
	Memory::WriteInt(0x0072B7CE + 1, (DWORD)&Array_aDefaultQKM_0);
	Memory::WriteInt(0x0072B8EB + 1, (DWORD)&Array_aDefaultQKM_0);

	//----CUIStatusBar::CQuickSlot::CompareValidateFuncKeyMappedInfo
	Memory::WriteByte(0x008DD916, 0x1A); // increase 8 --> 26
	Memory::WriteByte(0x008DD8AD, 0x1A); // increase 8 --> 26
	Memory::WriteByte(0x008DD8FD, 0xBB);
	Memory::WriteInt(0x008DD8FD + 1, (DWORD)&Array_Expanded);
	Memory::WriteByte(0x008DD8FD + 5, 0x90); //Errant byte
	Memory::WriteByte(0x008DD898, 0xB8);
	Memory::WriteInt(0x008DD898 + 1, (DWORD)&Array_Expanded);
	Memory::WriteByte(0x008DD898 + 5, 0x90); //Errant Byte

	//----CUIStatusBar::CQuickSlot::Draw
	Memory::WriteByte(0x008DE75E + 3, 0x6C);
	Memory::WriteByte(0x008DDF99, 0xB8);
	Memory::WriteInt(0x008DDF99 + 1, (DWORD)&Array_Expanded);
	Memory::FillBytes(0x008DDF99 + 5, 0x90, 3); // Nopping errant operations

	//----CUIStatusBar::OnMouseMove
	Memory::WriteByte(0x008D7F1E + 1, 0x34);
	Memory::WriteByte(0x008D7F1E + 2, 0x85);
	Memory::WriteInt(0x008D7F1E + 3, (DWORD)&Array_Expanded);

	//----CUIStatusBar::CQuickSlot::GetPosByIndex
	Memory::WriteInt(0x008DE94D + 2, (DWORD)&Array_ptShortKeyPos);
	Memory::WriteInt(0x008DE955 + 2, (DWORD)&Array_ptShortKeyPos + 4);
	Memory::WriteByte(0x008DE941 + 2, 0x1A); //change cmp 8 --> cmp 26

	//CUIStatusBar::GetShortCutIndexByPos
	Memory::WriteInt(0x008DE8F4 + 1, (DWORD)&Array_ptShortKeyPos_Fixed_Tooltips + 4);
	Memory::WriteByte(0x008DE926 + 1, 0x3E);

	//CUIStatusBar::CQuickSlot::DrawSkillCooltime
	Memory::WriteByte(0x008E099F + 3, 0x1A);
	Memory::WriteByte(0x008E069D, 0xBE);
	Memory::WriteInt(0x008E069D + 1, (DWORD)&cooldown_Array); //Pass enlarged FFFFF array
	Memory::WriteByte(0x008E069D + 5, 0x90); //Errant byte
	Memory::WriteByte(0x008E06A3, 0xBF);
	Memory::WriteInt(0x008E06A3 + 1, (DWORD)&Array_Expanded + 1);
	Memory::WriteByte(0x008E06A3 + 5, 0x90);

	//----CDraggableMenu::OnDropped
	Memory::WriteByte(0x004F928A + 2, 0x1A); //change cmp 8 --> cmp 26
	//----CDraggableMenu::MapFuncKey
	Memory::WriteByte(0x004F93F9 + 2, 0x1A); //change cmp 8 --> cmp 26
	//----CUIKeyConfig::OnDestroy
	Memory::WriteByte(0x00833797 + 2, 0x6C); // Updates the offset to 108 (triple) (old->24h)
	Memory::WriteByte(0x00833841 + 2, 0x6C); // Updates the offset to 108 (triple) (old->24h)
	Memory::WriteByte(0x00833791 + 1, 0x68); // push 68h (triple)
	Memory::WriteByte(0x0083383B + 1, 0x68); // push 68h (triple)
	//----CUIKeyConfig::~CUIKeyConfig
	Memory::WriteByte(0x0083287F + 2, 0x6C); // triple the base value at this hex (old->24h)
	Memory::WriteByte(0x00832882 + 1, 0x68); // push 68h (triple)
	//----CQuickslotKeyMappedMan::SaveQuickslotKeyMap
	Memory::WriteByte(0x0072B8C0 + 2, 0x6C); // triple the base value at this hex (old->24h)
	Memory::WriteByte(0x0072B8A0 + 1, 0x68); // push 68h, (triple) //CQuickslotKeyMappedMan::SaveQuickslotKeyMap
	Memory::WriteByte(0x0072B8BD + 1, 0x68); // push 68h, (triple) //CQuickslotKeyMappedMan::SaveQuickslotKeyMap
	//----CQuickslotKeyMappedMan::OnInit
	Memory::WriteByte(0x0072B861 + 1, 0x68); // push 68h (triple) (these ones might have to be just 60)
	Memory::WriteByte(0x0072B867 + 2, 0x6C); // triple the base value at this hex (old->24h)
	//----CUIKeyConfig::CNoticeDlg::OnChildNotify????
	Memory::WriteByte(0x00836A1E + 1, 0x68); // push 68h (triple)
	Memory::WriteByte(0x00836A21 + 2, 0x6C); // triple the base value at this hex (old->24h)


	// CODECAVES CLIENT EDITS ---- 
	Memory::CodeCave(CompareValidateFuncKeyMappedInfo_cave, 0x8DD8B8, 5);
	Memory::CodeCave(sub_9FA0CB_cave, 0x9FA0DB, 5);
	Memory::CodeCave(sDefaultQuickslotKeyMap_cave, 0x72B7BC, 5);
	Memory::CodeCave(DefaultQuickslotKeyMap_cave, 0x72B8E6, 5);
	Memory::CodeCave(Restore_Array_Expanded, 0x008CFDFD, 6); //restores the skill array to 0s
}

void Client::FixDateFormat() {
	if (SwitchChinese)
	{
		Memory::CodeCave(fixDateFormat, 0x008EBF57, 14); // StringPool 5273
		Memory::CodeCave(fixDateFormat2, 0x008EBFA1, 14); // StringPool 655
		Memory::CodeCave(fixDateFormat3, 0x008EC31A, 14); // StringPool 679
		Memory::CodeCave(fixDateFormat4, 0x008EBF05, 14); // StringPool 3138
	}
}

void Client::FixItemType() {
	if (SwitchChinese)
	{
		Memory::CodeCave(getItemType1, 0x005CFA99, 15);
		Memory::CodeCave(getItemType2, getItemType2Addr, 27);
	}
}

DWORD Client::jumpCap = 123;

void Client::JumpCap() {
	Memory::CodeCave(customJumpCapHook1, 0x00780797, 10);
	Memory::CodeCave(customJumpCapHook2, 0x008C42A3, 10);
	Memory::CodeCave(customJumpCapHook3, 0x0094D942, 5);


	Memory::WriteInt(0x009CC6F9 + 2, 0x00C1CF80);
	if (climbSpeedAuto)
	{
		Memory::CodeCave(calcSpeedHook, 0x0094D93C, 6);
	}
	else {
		Memory::WriteDouble(0x00C1CF80, climbSpeed * 3.0);
	}
}

void Client::FixChatPosHook() {
	// 修复聊天窗里的聊天信息偏下的问题
	// Memory::WriteByte(0x008DD05A + 2, 0x4);
	// Memory::WriteByte(0x008DD067 + 2, 0x3);
	// 老方法导致收起聊天框时，显示的信息太偏下了
	Memory::CodeCave(chatTextPos, 0x008DD06F, 6);
}

void Client::NoPassword() {
	if (noPassword && debug)
	{
		Memory::WriteInt(0x00620F2F + 2, 0);
	}
}

void Client::MoreHook() {
	Memory::WriteInt(0x009A3D81, 480);
	Memory::WriteByte(0x008EC4A7 + 1, 0x23);//装备属性页面的职业需求偏移战士
	Memory::WriteByte(0x008EC53C + 1, 0x4D);//魔法师
	Memory::WriteByte(0x008EC5D1 + 1, 0x7A);//弓箭手
	Memory::WriteByte(0x008EC660 + 1, 0xA9);//飞侠
	Memory::WriteByte(0x008EC6CF + 1, 0xC8);//海盗
	Memory::CodeCave(faceHairCave, 0x005C94F3, 18);
	Memory::CodeCave(canSendPkgTimeCave, 0x00485C28, 10);

	if (talkRepeat)
	{
		Memory::WriteByte(0x004905ED + 1, 5);
	}
	Memory::WriteInt(0x0049064B + 2, talkTime);

	if (setAtkOutCap > 999999)
	{
		Memory::WriteInt(0x008C485A + 1, 192); // 面板关闭按钮x
		Memory::WriteInt(0x008C4AB3 + 1, 210); // 面板宽度
		Memory::WriteInt(0x008C510A + 1, 218); // 详情面板宽度
		Memory::WriteInt(0x008C4EA2 + 1, 210); // 详情面板初始x
		Memory::WriteInt(0x008C5760 + 1, 210); // 详情面板切换x
		Memory::WriteInt(0x008C7AD9 + 1, 185); // 加属性按钮x
		Memory::WriteInt(0x008C2754 + 1, 195); // 详情面板关闭按钮x
		Memory::WriteInt(0x008C6C72 + 1, 210); // 移动时详情面板x
		Memory::CodeCave(apDetailBtn, 0x008C4E1B, 7); // 详情按钮
	}
	// 喇叭
	Memory::WriteInt(0x0045A5BE + 1, 9999);
}