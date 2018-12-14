#ifndef __UIIPADDRESS_H__
#define __UIIPADDRESS_H__

#pragma once

//���ÿؼ�����һ������dtstyle

namespace DuiLib {
	class CIPAddressWnd;

	/// ʱ��ѡ��ؼ�
	class UILIB_API CIPAddressUI: public CLabelUI {
		DECLARE_DUICONTROL (CIPAddressUI)

		friend class CIPAddressWnd;
	public:
		CIPAddressUI ();
		string_view_t GetClass () const;
		LPVOID GetInterface (string_view_t pstrName);

		DWORD GetIP ();
		void SetIP (DWORD dwIP);

		void SetReadOnly (bool bReadOnly);
		bool IsReadOnly () const;

		void UpdateText ();

		void DoEvent (TEventUI& event);

		void SetAttribute (string_view_t pstrName, string_view_t pstrValue);

	protected:
		DWORD			m_dwIP;
		bool			m_bReadOnly		= false;
		int				m_nIPUpdateFlag;

		CIPAddressWnd	*m_pWindow		= nullptr;
	};
}
#endif // __UIIPADDRESS_H__