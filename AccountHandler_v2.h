#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#inclue "Account.h"

class AccountHandler
{
	private:
		BoundCheckAccountPtrArray accArr;
		int accNum;
		
	public:
		AccountHandler();
		void ShowMenu(void) const;
		void MakeAccount(void);
		void DepositMoney(void);
		void WithdrawMoney(void);
		void ShowAllAccInfo(void);
		~AccountHandler();
		
	protected:
		void MakeNormalAccount(void);
		void MakeCreditAccount(void);
};
#endif
