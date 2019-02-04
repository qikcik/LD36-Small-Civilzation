#ifndef DATA_H
#define DATA_H


class Data
{
    public:

        int people;
        int money;
        int trybiki;
        int rolnictwo;
        int przemysl;
        int wiara;
        int datap[5];

        int idselect;
        Data();
        virtual ~Data();
        void reset();
};

#endif // DATA_H
