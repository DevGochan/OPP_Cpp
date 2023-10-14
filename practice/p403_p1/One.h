#pragma once

class One {
    private :
        int x;
        int y;

    public :
        int getX() const;
        int getY() const;
        One(int x, int y);
        ~One();
};