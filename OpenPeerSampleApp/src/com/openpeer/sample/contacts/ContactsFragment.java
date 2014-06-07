package com.openpeer.sample.contacts;

import java.util.Arrays;
import java.util.List;

import android.app.Fragment;
import android.os.Bundle;
import android.support.v4.widget.SwipeRefreshLayout;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ListView;

import com.openpeer.javaapi.OPIdentityContact;
import com.openpeer.javaapi.OPRolodexContact;
import com.openpeer.javaapi.OPRolodexContact.Dispositions;
import com.openpeer.javaapi.OPRolodexContact.OPAvatar;
import com.openpeer.sample.R;

public class ContactsFragment extends Fragment implements
		SwipeRefreshLayout.OnRefreshListener {

	private SwipeRefreshLayout mRootLayout;
	private ListView mListView;
	private ContactsAdapter mAdapter;
	private boolean mTest;

	public static ContactsFragment newInstance() {
		return new ContactsFragment();
	}

	public static ContactsFragment newTestInstance() {
		ContactsFragment fragment = new ContactsFragment();
		fragment.mTest = true;
		return fragment;
	}

	@Override
	public View onCreateView(LayoutInflater inflater, ViewGroup container,
			Bundle savedInstanceState) {
		return setupView(inflater.inflate(R.layout.fragment_contacts, null));
	}

	private View setupView(View view) {
		mListView = (ListView) view.findViewById(R.id.listview);
		mRootLayout = (SwipeRefreshLayout) view;
		mRootLayout.setOnRefreshListener(this);
		mAdapter = new ContactsAdapter();
		mListView.setAdapter(mAdapter);
		if (mTest) {
			fillTestView();
		}
		return view;
	}

	@Override
	public void onCreate(Bundle savedInstanceState) {
		// TODO Auto-generated method stub
		super.onCreate(savedInstanceState);
		this.setHasOptionsMenu(true);
	}

	@Override
	public void onCreateOptionsMenu(Menu menu, MenuInflater inflater) {
		inflater.inflate(R.menu.menu_contacts, menu);
		super.onCreateOptionsMenu(menu, inflater);
	}

	@Override
	public void onPause() {
		// TODO Auto-generated method stub
		super.onPause();
	}

	@Override
	public void onResume() {
		// TODO Auto-generated method stub
		super.onResume();
	}

	static class ContactsAdapter extends BaseAdapter {
		private List<OPRolodexContact> mContacts;

		@Override
		public int getCount() {
			// TODO Auto-generated method stub
			return mContacts == null ? 0 : mContacts.size();
		}

		@Override
		public Object getItem(int arg0) {
			// TODO Auto-generated method stub
			return mContacts.get(arg0);
		}

		@Override
		public long getItemId(int arg0) {
			// TODO Auto-generated method stub
			return 0;
		}

		@Override
		public View getView(int arg0, View arg1, ViewGroup arg2) {
			if (arg1 == null) {
				arg1 = new ContactItemView(arg2.getContext());
			}
			((ContactItemView) arg1)
					.updateData((OPRolodexContact) getItem(arg0));
			return arg1;
		}

	}

	@Override
	public void onRefresh() {
		ContactsManager.getInstance().refreshContacts();
		mRootLayout.setRefreshing(false);
	}

	// fill in test data to the view
	void fillTestView() {
		// ProfileURL Name David Gotwo identityUrl
		// identity://facebook.com/100003823387069 IdentityProvider facebook.com
		// Disposition Disposition_Update,
		// com.openpeer.javaapi.OPRolodexContact@4266cc90 ProfileURL Name David
		// Gofour identityUrl identity://facebook.com/100003952283621
		// IdentityProvider facebook.com Disposition Disposition_Update,
		// com.openpeer.javaapi.OPRolodexContact@4266d098 ProfileURL Name Cindy
		// Love identityUrl
		mAdapter.mContacts = Arrays.asList(new OPRolodexContact[] {
				new OPRolodexContact(
						OPRolodexContact.Dispositions.Disposition_Update,
						"identity://facebook.com/100003823387069",
						"facebook.com", "David Gotwo", null, null, null),
				new OPRolodexContact(
						OPRolodexContact.Dispositions.Disposition_Update,
						"identity://facebook.com/100003952283621",
						"facebook.com", "David Gofour", null, null, null),
				new OPIdentityContact(new OPRolodexContact(
						OPRolodexContact.Dispositions.Disposition_Update,
						"identity://facebook.com/100003952283621",
						"facebook.com", "David Gofour", null, null, null)) });
		mAdapter.notifyDataSetChanged();
	}

}
