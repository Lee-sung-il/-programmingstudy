package test.vo;

import java.sql.Connection;
import java.sql.PreparedStatement;

import test.dao.TestDao;

import static common.jdbcUtil.*;
public class TestVo {
	private int sq;
	private String name;
	public int getSq() {
		return sq;
	}

	public void setSq(int sq) {
		this.sq = sq;
	}

	

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}
	public boolean insertName(TestVo vo) {
		TestDao dao = TestDao.getInstance();
		Connection con = getConnection();
		dao.setConnection(con);
		boolean isSuccess = false;
		int count = dao.insertName(vo);
		if(count > 0 ) {
			commit(con);
			isSuccess = true;
		}else {
			rollback(con);
		}close(con);
		return isSuccess;
	}

}
