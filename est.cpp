bool inrange(double dval, double rangeValue, bool includeLower, bool includeUpper) {
    // Assuming rangeValue defines bounds (e.g., lower and upper bounds combined)
    double lowerBound = ...;  // Extract lower bound from rangeValue
    double upperBound = ...;  // Extract upper bound from rangeValue

    if ((includeLower && dval < lowerBound) || (!includeLower && dval <= lowerBound)) {
        return false;
    }
    if ((includeUpper && dval > upperBound) || (!includeUpper && dval >= upperBound)) {
        return false;
    }
    return true;
}
