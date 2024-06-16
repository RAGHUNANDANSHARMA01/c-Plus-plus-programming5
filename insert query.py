import sqlite3
conn=splite3.connect("sqlite.db")
inst="insert into student(st_name,st_class,st_email)values("ram","12th","ram@gmail.com");
conn.execute(inst)
conn.commit()
conn.close()
