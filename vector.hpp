namespace vector
{
    template<class T>
    class Vector
    {
        public:
            Vector(){}
            ~Vector(){}
            void sort(){}
            void push_back(T elem){};
        private:
        //real size
            size_t size;
        //capacity
            size_t capacity;
        //stored data
            T *data;
    };
} // namespace vector
