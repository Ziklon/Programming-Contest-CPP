
template <typename A> void print_vector(std::ostream &out, std::vector<A> &v) {
    for (int i = 0; i < (int) v.size(); ++i)
        out << v[i] << ((i + 1) < v.size() ? ' ' : '\n');
}